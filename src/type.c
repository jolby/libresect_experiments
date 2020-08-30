#include "../resect.h"
#include "resect_private.h"

#include <stdlib.h>
#include <assert.h>
#include <string.h>

#include <clang-c/Index.h>

#define CONST_QUALIFIER_LENGTH (6)
/*
 * TYPE
 */
struct resect_type {
    resect_type_kind kind;
    resect_string name;
    unsigned int size;
    unsigned int alignment;
    resect_type_category category;
    resect_collection fields;
    resect_collection template_arguments;
    resect_bool const_qualified;
    resect_bool pod;

    resect_decl decl;

    resect_data_deallocator data_deallocator;
    void *data;
};

/*
 * TEMPLATE ARGUMENT
 */
struct resect_template_argument {
    int position;
    resect_template_argument_kind kind;
    resect_type type;
    long long int value;
};

resect_template_argument_kind convert_template_argument_kind(enum CXTemplateArgumentKind kind) {
    switch (kind) {
        case CXTemplateArgumentKind_Null:
            return RESECT_TEMPLATE_ARGUMENT_KIND_NULL;
        case CXTemplateArgumentKind_Type:
            return RESECT_TEMPLATE_ARGUMENT_KIND_TYPE;
        case CXTemplateArgumentKind_Declaration:
            return RESECT_TEMPLATE_ARGUMENT_KIND_DECLARATION;
        case CXTemplateArgumentKind_NullPtr:
            return RESECT_TEMPLATE_ARGUMENT_KIND_NULL_PTR;
        case CXTemplateArgumentKind_Integral:
            return RESECT_TEMPLATE_ARGUMENT_KIND_INTEGRAL;
        case CXTemplateArgumentKind_Template:
            return RESECT_TEMPLATE_ARGUMENT_KIND_TEMPLATE;
        case CXTemplateArgumentKind_TemplateExpansion:
            return RESECT_TEMPLATE_ARGUMENT_KIND_TEMPLATE_EXPANSION;
        case CXTemplateArgumentKind_Expression:
            return RESECT_TEMPLATE_ARGUMENT_KIND_EXPRESSION;
        case CXTemplateArgumentKind_Pack:
            return RESECT_TEMPLATE_ARGUMENT_KIND_PACK;
        default:
            return RESECT_TEMPLATE_ARGUMENT_KIND_UNKNOWN;
    }
}

resect_template_argument resect_template_argument_create_from_cursor(resect_translation_context context,
                                                                     CXCursor cursor,
                                                                     int arg_number) {
    resect_template_argument arg = malloc(sizeof(struct resect_template_argument));

    arg->position = arg_number;
    arg->kind = convert_template_argument_kind(clang_Cursor_getTemplateArgumentKind(cursor, arg_number));
    arg->type = NULL;
    arg->value = 0;

    switch (arg->kind) {
        case RESECT_TEMPLATE_ARGUMENT_KIND_TEMPLATE_EXPANSION:
        case RESECT_TEMPLATE_ARGUMENT_KIND_TEMPLATE:
        case RESECT_TEMPLATE_ARGUMENT_KIND_TYPE:
        case RESECT_TEMPLATE_ARGUMENT_KIND_DECLARATION:
            arg->type = resect_type_create(context, clang_Cursor_getTemplateArgumentType(cursor, arg_number), cursor);
            break;
        case RESECT_TEMPLATE_ARGUMENT_KIND_PACK:
        case RESECT_TEMPLATE_ARGUMENT_KIND_EXPRESSION:
        case RESECT_TEMPLATE_ARGUMENT_KIND_INTEGRAL:
            arg->value = clang_Cursor_getTemplateArgumentValue(cursor, arg_number);
            break;
    }

    return arg;
}

resect_template_argument resect_template_argument_create_from_type(resect_translation_context context,
                                                                   CXCursor cursor,
                                                                   CXType type,
                                                                   int arg_number) {
    CXType template_argument_type = clang_Type_getTemplateArgumentAsType(type, arg_number);

    resect_template_argument arg = malloc(sizeof(struct resect_template_argument));
    arg->position = arg_number;
    arg->kind = RESECT_TEMPLATE_ARGUMENT_KIND_TYPE;
    arg->type = resect_type_create(context, template_argument_type, cursor);
    arg->value = 0;

    return arg;
}


void resect_template_argument_free(resect_template_argument arg, resect_set deallocated) {
    if (!resect_set_add(deallocated, arg)) {
        return;
    }
    if (arg->type != NULL) {
        resect_type_free(arg->type, deallocated);
    }

    free(arg);
}

void resect_init_template_args_from_cursor(resect_translation_context context,
                                           resect_collection args,
                                           CXCursor cursor) {
    int arg_count = clang_Cursor_getNumTemplateArguments(cursor);
    for (int i = 0; i < arg_count; ++i) {
        resect_collection_add(args, resect_template_argument_create_from_cursor(context, cursor, i));
    }
}

void resect_init_template_args_from_type(resect_translation_context context,
                                         resect_collection args,
                                         CXType type,
                                         CXCursor cursor) {
    int arg_count = clang_Type_getNumTemplateArguments(type);
    for (int i = 0; i < arg_count; ++i) {
        resect_collection_add(args, resect_template_argument_create_from_type(context, cursor, type, i));
    }
}

void resect_free_template_args(resect_collection args, resect_set deallocated) {
    resect_iterator template_arg_iter = resect_collection_iterator(args);
    while (resect_iterator_next(template_arg_iter)) {
        resect_template_argument_free(resect_iterator_value(template_arg_iter), deallocated);
    }
    resect_iterator_free(template_arg_iter);
}

resect_type resect_template_argument_get_type(resect_template_argument arg) {
    return arg->type;
}

long long resect_template_argument_get_value(resect_template_argument arg) {
    return arg->value;
}

int resect_template_argument_get_position(resect_template_argument arg) {
    return arg->position;
}

void resect_type_free(resect_type type, resect_set deallocated) {
    if (!resect_set_add(deallocated, type)) {
        return;
    }

    if (type->data_deallocator) {
        type->data_deallocator(type->data, deallocated);
    }

    resect_string_free(type->name);
    resect_decl_collection_free(type->fields, deallocated);

    resect_free_template_args(type->template_arguments, deallocated);
    resect_collection_free(type->template_arguments);

    if (type->decl != NULL) {
        resect_decl_free(type->decl, deallocated);
    }

    free(type);
}

void resect_type_collection_free(resect_collection types, resect_set deallocated) {
    resect_iterator iter = resect_collection_iterator(types);
    while (resect_iterator_next(iter)) {
        resect_type_free(resect_iterator_value(iter), deallocated);
    }
    resect_iterator_free(iter);
    resect_collection_free(types);
}

resect_type_kind convert_type_kind(enum CXTypeKind kind) {
    switch (kind) {
        case CXType_Invalid:
        case CXType_Unexposed:
            return RESECT_TYPE_KIND_UNKNOWN;
        default:
            return (resect_type_kind) kind;
    }
}

typedef struct resect_type_visit_data {
    resect_type type;
    resect_translation_context context;
} *resect_type_visit_data;

enum CXVisitorResult visit_type_fields(CXCursor cursor, CXClientData data) {
    resect_type_visit_data visit_data = data;
    resect_decl field_decl = resect_decl_create(visit_data->context, cursor);
    resect_collection_add(visit_data->type->fields, field_decl);
    return CXVisit_Continue;
}

/*
 * ARRAY
 */
typedef struct resect_array_data {
    resect_type type;
    long long size;
} *resect_array_data;

void resect_array_data_free(void *data, resect_set deallocated) {
    if (data == NULL || !resect_set_add(deallocated, data)) {
        return;
    }

    resect_array_data array_data = data;
    resect_type_free(array_data->type, deallocated);
    free(data);
}

void resect_array_init(resect_translation_context context, resect_type type, CXType clangType, CXCursor cursor) {
    resect_array_data data = malloc(sizeof(struct resect_array_data));
    data->type = resect_type_create(context, clang_getArrayElementType(clangType), cursor);
    data->size = clang_getArraySize(clangType);

    type->data_deallocator = resect_array_data_free;
    type->data = data;
}

long long resect_array_get_size(resect_type type) {
    assert(type->category == RESECT_TYPE_CATEGORY_ARRAY);
    resect_array_data data = type->data;
    return data->size;
}

resect_type resect_array_get_element_type(resect_type type) {
    assert(type->category == RESECT_TYPE_CATEGORY_ARRAY);
    resect_array_data data = type->data;
    return data->type;
}

/*
 * POINTER
 */
typedef struct resect_pointer_data {
    resect_type type;
} *resect_pointer_data;

void resect_pointer_data_free(void *data, resect_set deallocated) {
    if (data == NULL || !resect_set_add(deallocated, data)) {
        return;
    }
    resect_pointer_data pointer = data;
    resect_type_free(pointer->type, deallocated);
    free(data);
}

void resect_pointer_init(resect_translation_context context, resect_type type, CXType clangType, CXCursor cursor) {
    resect_pointer_data data = malloc(sizeof(struct resect_pointer_data));
    data->type = resect_type_create(context, clang_getPointeeType(clangType), cursor);

    type->data_deallocator = resect_pointer_data_free;
    type->data = data;
}

resect_type resect_pointer_get_pointee_type(resect_type type) {
    assert(type->category == RESECT_TYPE_CATEGORY_POINTER);
    resect_pointer_data data = type->data;
    return data->type;
}


/*
 * REFERENCE
 */
typedef struct resect_reference_data {
    resect_bool is_lvalue;
    resect_type type;
} *resect_reference_data;

void resect_reference_data_free(void *data, resect_set deallocated) {
    if (data == NULL || !resect_set_add(deallocated, data)) {
        return;
    }
    resect_reference_data pointer = data;
    resect_type_free(pointer->type, deallocated);
    free(data);
}

void resect_reference_init(resect_translation_context context, resect_type type, CXType clangType, CXCursor cursor) {
    resect_reference_data data = malloc(sizeof(struct resect_reference_data));

    data->type = resect_type_create(context, clang_getPointeeType(clangType), cursor);
    data->is_lvalue = clangType.kind == CXType_LValueReference;

    type->data_deallocator = resect_reference_data_free;
    type->data = data;
}

resect_type resect_reference_get_pointee_type(resect_type type) {
    assert(type->category == RESECT_TYPE_CATEGORY_REFERENCE);
    resect_reference_data data = type->data;
    return data->type;
}

resect_bool resect_reference_is_lvalue(resect_type type) {
    assert(type->category == RESECT_TYPE_CATEGORY_REFERENCE);
    resect_reference_data data = type->data;
    return data->is_lvalue;
}

/*
 * FUNCTION PROTO
 */
typedef struct resect_function_proto_data {
    resect_type result_type;
    resect_bool variadic;
    resect_collection parameters;
} *resect_function_proto_data;

void resect_function_proto_free(void *data, resect_set deallocated) {
    if (data == NULL || !resect_set_add(deallocated, data)) {
        return;
    }
    resect_function_proto_data function_proto = data;
    resect_type_free(function_proto->result_type, deallocated);
    resect_type_collection_free(function_proto->parameters, deallocated);

    free(data);
}

void resect_function_proto_init(resect_translation_context context,
                                resect_type type,
                                CXType clangType,
                                CXCursor cursor) {
    resect_function_proto_data data = malloc(sizeof(struct resect_function_proto_data));
    data->result_type = resect_type_create(context, clang_getResultType(clangType), cursor);
    data->variadic = clang_isFunctionTypeVariadic(clangType);
    data->parameters = resect_collection_create();

    int arg_count = clang_getNumArgTypes(clangType);
    for (int i = 0; i < arg_count; ++i) {
        CXType arg_type = clang_getArgType(clangType, i);
        resect_collection_add(data->parameters, resect_type_create(context, arg_type, cursor));
    }

    type->data_deallocator = resect_function_proto_free;
    type->data = data;
}

resect_type resect_function_proto_get_result_type(resect_type type) {
    assert(type->kind == RESECT_TYPE_KIND_FUNCTIONPROTO);

    resect_function_proto_data data = type->data;
    return data->result_type;
}

resect_bool resect_function_proto_is_variadic(resect_type type) {
    assert(type->kind == RESECT_TYPE_KIND_FUNCTIONPROTO);

    resect_function_proto_data data = type->data;
    return data->variadic;
}

resect_collection resect_function_proto_parameters(resect_type type) {
    assert(type->kind == RESECT_TYPE_KIND_FUNCTIONPROTO);

    resect_function_proto_data data = type->data;
    return data->parameters;
}

/*
 * TYPE CONSTRUCTOR
 */
resect_type resect_type_create(resect_translation_context context, CXType clang_type, CXCursor cursor) {
    switch (clang_type.kind) {
        case CXType_Elaborated:
            return resect_type_create(context, clang_Type_getNamedType(clang_type), cursor);
        case CXType_Unexposed: {
            CXType canonical_type = clang_getCanonicalType(clang_type);
            if (CXType_Unexposed != canonical_type.kind) {
                return resect_type_create(context, canonical_type, cursor);
            }
        }
            break;
    }

    resect_type type = malloc(sizeof(struct resect_type));

    type->kind = convert_type_kind(clang_type.kind);
    type->name = resect_string_from_clang(clang_getTypeSpelling(clang_type));
    type->size = 8 * filter_valid_value(clang_Type_getSizeOf(clang_type));
    type->alignment = 8 * filter_valid_value(clang_Type_getAlignOf(clang_type));
    type->fields = resect_collection_create();
    type->template_arguments = resect_collection_create();
    type->const_qualified = clang_isConstQualifiedType(clang_type);
    type->pod = clang_isPODType(clang_type);

    type->data_deallocator = NULL;
    type->data = NULL;

    resect_init_template_args_from_type(context, type->template_arguments, clang_type, cursor);

    CXCursor declaration_cursor = clang_getTypeDeclaration(clang_type);
    type->decl = (cursor.kind == CXCursor_NoDeclFound) ? NULL : resect_decl_create(context, declaration_cursor);
    struct resect_type_visit_data visit_data = {type = type, context = context};
    clang_Type_visitFields(clang_type, visit_type_fields, &visit_data);

    switch (type->kind) {
        case RESECT_TYPE_KIND_BOOL:
        case RESECT_TYPE_KIND_CHAR_U:
        case RESECT_TYPE_KIND_UCHAR:
        case RESECT_TYPE_KIND_CHAR16:
        case RESECT_TYPE_KIND_CHAR32:
        case RESECT_TYPE_KIND_USHORT:
        case RESECT_TYPE_KIND_UINT:
        case RESECT_TYPE_KIND_ULONG:
        case RESECT_TYPE_KIND_ULONGLONG:
        case RESECT_TYPE_KIND_UINT128:
        case RESECT_TYPE_KIND_CHAR_S:
        case RESECT_TYPE_KIND_SCHAR:
        case RESECT_TYPE_KIND_WCHAR:
        case RESECT_TYPE_KIND_SHORT:
        case RESECT_TYPE_KIND_INT:
        case RESECT_TYPE_KIND_LONG:
        case RESECT_TYPE_KIND_LONGLONG:
        case RESECT_TYPE_KIND_INT128:
        case RESECT_TYPE_KIND_FLOAT:
        case RESECT_TYPE_KIND_DOUBLE:
        case RESECT_TYPE_KIND_LONGDOUBLE:
        case RESECT_TYPE_KIND_FLOAT128:
        case RESECT_TYPE_KIND_HALF:
        case RESECT_TYPE_KIND_FLOAT16:
        case RESECT_TYPE_KIND_COMPLEX:
            type->category = RESECT_TYPE_CATEGORY_ARITHMETIC;
            break;
        case RESECT_TYPE_KIND_VOID:
        case RESECT_TYPE_KIND_NULLPTR:
        case RESECT_TYPE_KIND_OVERLOAD:
        case RESECT_TYPE_KIND_DEPENDENT:
        case RESECT_TYPE_KIND_AUTO:
        case RESECT_TYPE_KIND_ATTRIBUTED:
            type->category = RESECT_TYPE_CATEGORY_AUX;
            break;
        case RESECT_TYPE_KIND_POINTER:
        case RESECT_TYPE_KIND_MEMBERPOINTER:
        case RESECT_TYPE_KIND_BLOCKPOINTER:
            type->category = RESECT_TYPE_CATEGORY_POINTER;
            resect_pointer_init(context, type, clang_type, cursor);
            break;
        case RESECT_TYPE_KIND_LVALUEREFERENCE:
        case RESECT_TYPE_KIND_RVALUEREFERENCE:
            type->category = RESECT_TYPE_CATEGORY_REFERENCE;
            resect_reference_init(context, type, clang_type, cursor);
            break;
        case RESECT_TYPE_KIND_RECORD:
        case RESECT_TYPE_KIND_ENUM:
        case RESECT_TYPE_KIND_TYPEDEF:
        case RESECT_TYPE_KIND_FUNCTIONNOPROTO:
            type->category = RESECT_TYPE_CATEGORY_UNIQUE;
            break;
        case RESECT_TYPE_KIND_FUNCTIONPROTO:
            type->category = RESECT_TYPE_CATEGORY_UNIQUE;
            resect_function_proto_init(context, type, clang_type, cursor);
            break;
        case RESECT_TYPE_KIND_CONSTANTARRAY:
        case RESECT_TYPE_KIND_VECTOR:
        case RESECT_TYPE_KIND_INCOMPLETEARRAY:
        case RESECT_TYPE_KIND_VARIABLEARRAY:
        case RESECT_TYPE_KIND_DEPENDENTSIZEDARRAY:
        case RESECT_TYPE_KIND_EXTVECTOR:
            type->category = RESECT_TYPE_CATEGORY_ARRAY;
            resect_array_init(context, type, clang_type, cursor);
            break;
        default:
            type->category = RESECT_TYPE_CATEGORY_UNKNOWN;
    }

    if (type->kind == RESECT_TYPE_KIND_UNKNOWN && type->decl == NULL) {
        resect_decl param = NULL;
        if (clang_isConstQualifiedType(clang_type)
            && strlen(resect_string_to_c(type->name)) > CONST_QUALIFIER_LENGTH) {

            resect_string unqualified_name = resect_substring(type->name, CONST_QUALIFIER_LENGTH, -1);
            param = resect_find_template_parameter(context, unqualified_name);
            resect_string_free(unqualified_name);
        } else {
            param = resect_find_template_parameter(context, type->name);
        }
        if (param != NULL) {
            type->kind = RESECT_TYPE_KIND_TEMPLATE_PARAMETER;
            type->category = RESECT_TYPE_CATEGORY_UNIQUE;
            type->decl = param;
        }
    }
    return type;
}

resect_type_kind resect_type_get_kind(resect_type type) {
    return type->kind;
}

const char *resect_type_get_name(resect_type type) {
    return resect_string_to_c(type->name);
}

long long resect_type_sizeof(resect_type type) {
    return type->size;
}

long long resect_type_alignof(resect_type type) {
    return type->alignment;
}

long long resect_type_offsetof(resect_type type, const char *field_name) {
    resect_iterator iterator = resect_collection_iterator(type->fields);

    long long result = -1;
    while (resect_iterator_next(iterator)) {
        resect_decl field_decl = resect_iterator_value(iterator);
        if (strcmp(resect_decl_get_name(field_decl), field_name) == 0) {
            result = resect_field_get_offset(field_decl);
            break;
        }
    }
    resect_iterator_free(iterator);
    return result;
}

resect_collection resect_type_fields(resect_type type) {
    return type->fields;
}

resect_bool resect_type_is_const_qualified(resect_type type) {
    return type->const_qualified;
}

resect_bool resect_type_is_pod(resect_type type) {
    return type->pod;
}

resect_decl resect_type_get_declaration(resect_type type) {
    return type->decl;
}

resect_type_category resect_type_get_category(resect_type type) {
    return type->category;
}

resect_collection resect_type_template_arguments(resect_type type) {
    return type->template_arguments;
}