#ifndef RESECT_H
#define RESECT_H

#include <stdlib.h>

#if defined(_WIN32)
#  if !defined(RESECT_API_NOEXPORT)
#    define RESECT_API __declspec(dllexport)
#  else
#    define RESECT_API __declspec(dllimport)
#  endif
#elif defined(__GNUC__)
#  define RESECT_API __attribute__((visibility("default")))
#else
#  define RESECT_API
#endif
#ifdef __cplusplus
extern "C" {
#endif

#define resect_true (1)
#define resect_false (0)

typedef int resect_bool;

typedef struct P_resect_string *resect_string;

typedef struct {
    int code;
    const char *name;
}enum_val_string_map;

/* x-macro constructors for error and type
   enums and string tables */
#define AS_BARE(a) a ,
/* For non-contiguous enums */
#define AS_BARE_ASSIGN(a,b) a = b ,
#define AS_STR(a) #a ,
#define SINGLE_AS_PAIR(a) {a, #a},
#define AS_PAIR(a, b) {b, #a},
#define SINGLE_COUNT_ENUM(a) + 1
#define COUNT_ENUM(a, b) + 1

#define INVALID_ENUM_VALUE -255
#define INVALID_ENUM_LOOKUP_KEY -254
#define UNKNOWN_ENUM_VALUE -253

/* For simple contiguous enums */
#define DEF_ENUM_DECL(NAME, ENUMS)             \
    typedef enum { ENUMS(AS_BARE) } NAME; \
    extern size_t NAME ## _count(); \
    extern int NAME ## _min(); \
    extern int NAME ## _max(); \
    extern resect_bool is_ ## NAME ## _p(NAME val); \
    extern const char* NAME ## _to_string(NAME val); \
    extern resect_string NAME ## _to_resect_string(NAME val); \
    extern int string_to_ ## NAME(const char* str); \
    extern void NAME ## _dump();

/* For non-contiguous enums */
#define DEF_ENUM_ASSIGN_DECL(NAME, ENUMS)             \
    typedef enum { ENUMS(AS_BARE_ASSIGN) } NAME; \
    extern size_t NAME ## _count(); \
    extern int NAME ## _min(); \
    extern int NAME ## _max(); \
    extern resect_bool is_ ## NAME ## _p(NAME val); \
    extern const char* NAME ## _to_string(NAME val); \
    extern resect_string NAME ## _to_resect_string(NAME val); \
    extern int string_to_ ## NAME(const char* str); \
    extern void NAME ## _dump;


#define RESECT_ERROR_CODES(_) \
    _(RESECT_OK) \
    _(RESECT_ERR_NULL_POINTER) \
    _(RESECT_ERR_OUT_OF_MEMORY) \
    _(RESECT_ERR_INVALID_ARGUMENT) \
    _(RESECT_ERR_MAX_RECUSION_DEPTH) \
    _(RESECT_ERR_FILE_NOT_FOUND) \
    _(RESECT_ERR_DIR_NOT_FOUND) \
    _(RESECT_ERR_MISSING_DECL_ID) \
    _(RESECT_ERR_SQLITE_ERROR) \
    _(RESECT_ERR_SQLITE_DB_OPEN_ERROR) \
    _(RESECT_ERR_SQLITE_DDL_ERROR) \
    _(RESECT_ERR_SQLITE_PREPARE_ERROR) \
    _(RESECT_ERR_SQLITE_BIND_ERROR) \
    _(RESECT_ERR_SQLITE_STEP_ERROR) \
    _(RESECT_ERR_SQLITE_INSERT_ERROR) \
    _(CLANG_ERR_INVALID_ARGUMENT) \
    _(CLANG_ERR_AST_READ_ERROR)


/* Generate the enum+helper declarations */
DEF_ENUM_DECL(resect_error_code, RESECT_ERROR_CODES)


/* x-macro constructors for decl_kind enum and string table */
#define RESECT_DECL_KIND_CODES(_) \
    _(RESECT_DECL_KIND_UNKNOWN) \
    _(RESECT_DECL_KIND_STRUCT) \
    _(RESECT_DECL_KIND_UNION) \
    _(RESECT_DECL_KIND_CLASS) \
    _(RESECT_DECL_KIND_ENUM) \
    _(RESECT_DECL_KIND_FIELD) \
    _(RESECT_DECL_KIND_FUNCTION) \
    _(RESECT_DECL_KIND_VARIABLE) \
    _(RESECT_DECL_KIND_PARAMETER) \
    _(RESECT_DECL_KIND_TYPEDEF) \
    _(RESECT_DECL_KIND_METHOD) \
    _(RESECT_DECL_KIND_ENUM_CONSTANT) \
    _(RESECT_DECL_KIND_MACRO) \
    _(RESECT_DECL_KIND_TEMPLATE_PARAMETER) \
    _(RESECT_DECL_KIND_UNDECLARED)

/* Generate the resect_decl_kind enum+helpers */
DEF_ENUM_DECL(resect_decl_kind, RESECT_DECL_KIND_CODES)

/* x-macro constructors for access_specifier enum and string table */
#define RESECT_ACCESS_SPECIFIER_CODES(_) \
    _(RESECT_ACCESS_SPECIFIER_UNKNOWN) \
    _(RESECT_ACCESS_SPECIFIER_PUBLIC) \
    _(RESECT_ACCESS_SPECIFIER_PROTECTED) \
    _(RESECT_ACCESS_SPECIFIER_PRIVATE)

/* Generate the resect_access_specifier enum+helpers */
DEF_ENUM_DECL(resect_access_specifier, RESECT_ACCESS_SPECIFIER_CODES)


#define RESECT_TYPE_KIND_CODES(_) \
    _(RESECT_TYPE_KIND_UNKNOWN, 0) \
    _(RESECT_TYPE_KIND_VOID, 2) \
    _(RESECT_TYPE_KIND_BOOL, 3) \
    _(RESECT_TYPE_KIND_CHAR_U, 4) \
    _(RESECT_TYPE_KIND_UCHAR, 5) \
    _(RESECT_TYPE_KIND_CHAR16, 6) \
    _(RESECT_TYPE_KIND_CHAR32, 7) \
    _(RESECT_TYPE_KIND_USHORT, 8) \
    _(RESECT_TYPE_KIND_UINT, 9) \
    _(RESECT_TYPE_KIND_ULONG, 10) \
    _(RESECT_TYPE_KIND_ULONGLONG, 11) \
    _(RESECT_TYPE_KIND_UINT128, 12) \
    _(RESECT_TYPE_KIND_CHAR_S, 13) \
    _(RESECT_TYPE_KIND_SCHAR, 14) \
    _(RESECT_TYPE_KIND_WCHAR, 15) \
    _(RESECT_TYPE_KIND_SHORT, 16) \
    _(RESECT_TYPE_KIND_INT, 17) \
    _(RESECT_TYPE_KIND_LONG, 18) \
    _(RESECT_TYPE_KIND_LONGLONG, 19) \
    _(RESECT_TYPE_KIND_INT128, 20) \
    _(RESECT_TYPE_KIND_FLOAT, 21) \
    _(RESECT_TYPE_KIND_DOUBLE, 22) \
    _(RESECT_TYPE_KIND_LONGDOUBLE, 23) \
    _(RESECT_TYPE_KIND_NULLPTR, 24) \
    _(RESECT_TYPE_KIND_OVERLOAD, 25) \
    _(RESECT_TYPE_KIND_DEPENDENT, 26) \
    _(RESECT_TYPE_KIND_FLOAT128, 30) \
    _(RESECT_TYPE_KIND_HALF, 31) \
    _(RESECT_TYPE_KIND_FLOAT16, 32) \
    _(RESECT_TYPE_KIND_COMPLEX, 100) \
    _(RESECT_TYPE_KIND_POINTER, 101) \
    _(RESECT_TYPE_KIND_BLOCKPOINTER, 102) \
    _(RESECT_TYPE_KIND_LVALUEREFERENCE, 103) \
    _(RESECT_TYPE_KIND_RVALUEREFERENCE, 104) \
    _(RESECT_TYPE_KIND_RECORD, 105) \
    _(RESECT_TYPE_KIND_ENUM, 106) \
    _(RESECT_TYPE_KIND_TYPEDEF, 107) \
    _(RESECT_TYPE_KIND_FUNCTIONNOPROTO, 110) \
    _(RESECT_TYPE_KIND_FUNCTIONPROTO, 111) \
    _(RESECT_TYPE_KIND_CONSTANTARRAY, 112) \
    _(RESECT_TYPE_KIND_VECTOR, 113) \
    _(RESECT_TYPE_KIND_INCOMPLETEARRAY, 114) \
    _(RESECT_TYPE_KIND_VARIABLEARRAY, 115) \
    _(RESECT_TYPE_KIND_DEPENDENTSIZEDARRAY, 116) \
    _(RESECT_TYPE_KIND_MEMBERPOINTER, 117) \
    _(RESECT_TYPE_KIND_AUTO, 118) \
    _(RESECT_TYPE_KIND_ATOMIC, 177) \
    _(RESECT_TYPE_KIND_EXTVECTOR, 178) \
    _(RESECT_TYPE_KIND_TEMPLATE_PARAMETER, 10000)

/* Generate the resect_type_kind enum */
DEF_ENUM_ASSIGN_DECL(resect_type_kind, RESECT_TYPE_KIND_CODES)


#define RESECT_TYPE_CATEGORY_CODES(_) \
    _(RESECT_TYPE_CATEGORY_UNKNOWN) \
    _(RESECT_TYPE_CATEGORY_ARITHMETIC) \
    _(RESECT_TYPE_CATEGORY_POINTER) \
    _(RESECT_TYPE_CATEGORY_REFERENCE) \
    _(RESECT_TYPE_CATEGORY_ARRAY) \
    _(RESECT_TYPE_CATEGORY_UNIQUE) \
    _(RESECT_TYPE_CATEGORY_AUX)

/* Generate the resect_type_category enum */
DEF_ENUM_DECL(resect_type_category, RESECT_TYPE_CATEGORY_CODES)


#define RESECT_FUNCTION_CALLING_CONVENTION_CODES(_) \
    _(RESECT_FUNCTION_CALLING_CONVENTION_UNKNOWN) \
    _(RESECT_FUNCTION_CALLING_CONVENTION_DEFAULT) \
    _(RESECT_FUNCTION_CALLING_CONVENTION_C) \
    _(RESECT_FUNCTION_CALLING_CONVENTION_X86_STDCALL) \
    _(RESECT_FUNCTION_CALLING_CONVENTION_X86_FASTCALL) \
    _(RESECT_FUNCTION_CALLING_CONVENTION_X86_THISCALL) \
    _(RESECT_FUNCTION_CALLING_CONVENTION_X86_REGCALL) \
    _(RESECT_FUNCTION_CALLING_CONVENTION_X86_VECTORCALL) \
    _(RESECT_FUNCTION_CALLING_CONVENTION_X86_PASCAL) \
    _(RESECT_FUNCTION_CALLING_CONVENTION_X86_64_WIN64) \
    _(RESECT_FUNCTION_CALLING_CONVENTION_X86_64_SYSV) \
    _(RESECT_FUNCTION_CALLING_CONVENTION_AARCH64_VECTORCALL) \
    _(RESECT_FUNCTION_CALLING_CONVENTION_AAPCS) \
    _(RESECT_FUNCTION_CALLING_CONVENTION_AAPCS_VFP) \
    _(RESECT_FUNCTION_CALLING_CONVENTION_INTEL_OCL_BICC) \
    _(RESECT_FUNCTION_CALLING_CONVENTION_SWIFT) \
    _(RESECT_FUNCTION_CALLING_CONVENTION_PRESERVE_MOST) \
    _(RESECT_FUNCTION_CALLING_CONVENTION_PRESERVE_ALL)

/* Generate the resect_function_calling_convention enum */
DEF_ENUM_DECL(resect_function_calling_convention, RESECT_FUNCTION_CALLING_CONVENTION_CODES)


#define RESECT_STORAGE_CLASS_CODES(_) \
    _(RESECT_STORAGE_CLASS_UNKNOWN) \
    _(RESECT_STORAGE_CLASS_NONE) \
    _(RESECT_STORAGE_CLASS_EXTERN) \
    _(RESECT_STORAGE_CLASS_STATIC) \
    _(RESECT_STORAGE_CLASS_PRIVATE_EXTERN) \
    _(RESECT_STORAGE_CLASS_OPENCL_WORKGROUP_LOCAL) \
    _(RESECT_STORAGE_CLASS_AUTO) \
    _(RESECT_STORAGE_CLASS_REGISTER)

/* Generate the resect_storage_class enum */
DEF_ENUM_DECL(resect_storage_class, RESECT_STORAGE_CLASS_CODES)


#define RESECT_VARIABLE_KIND_CODES(_) \
    _(RESECT_VARIABLE_TYPE_UNKNOWN) \
    _(RESECT_VARIABLE_TYPE_INT) \
    _(RESECT_VARIABLE_TYPE_FLOAT) \
    _(RESECT_VARIABLE_TYPE_STRING) \
    _(RESECT_VARIABLE_TYPE_OTHER)

/* Generate the resect_variable_kind enum */
DEF_ENUM_DECL(resect_variable_kind, RESECT_VARIABLE_KIND_CODES)


#define RESECT_LANGUAGE_CODES(_) \
    _(RESECT_LANGUAGE_UNKNOWN, 0) \
    _(RESECT_LANGUAGE_C, 1) \
    _(RESECT_LANGUAGE_CXX, 2) \
    _(RESECT_LANGUAGE_OBJC, 3) \
    _(RESECT_LANGUAGE__LAST, RESECT_LANGUAGE_OBJC)

/* Generate the resect_language enum */
DEF_ENUM_ASSIGN_DECL(resect_language, RESECT_LANGUAGE_CODES)


#define RESECT_TEMPLATE_PARAMETER_KIND_CODES(_) \
    _(RESECT_TEMPLATE_PARAMETER_KIND_UNKNOWN) \
    _(RESECT_TEMPLATE_PARAMETER_KIND_TEMPLATE) \
    _(RESECT_TEMPLATE_PARAMETER_KIND_TYPE) \
    _(RESECT_TEMPLATE_PARAMETER_KIND_NON_TYPE)

/* Generate the resect_template_parameter_kind enum */
DEF_ENUM_DECL(resect_template_parameter_kind, RESECT_TEMPLATE_PARAMETER_KIND_CODES)


#define RESECT_TEMPLATE_ARGUMENT_KIND_CODES(_)  \
    _(RESECT_TEMPLATE_ARGUMENT_KIND_UNKNOWN) \
    _(RESECT_TEMPLATE_ARGUMENT_KIND_NULL) \
    _(RESECT_TEMPLATE_ARGUMENT_KIND_TYPE) \
    _(RESECT_TEMPLATE_ARGUMENT_KIND_DECLARATION) \
    _(RESECT_TEMPLATE_ARGUMENT_KIND_NULL_PTR) \
    _(RESECT_TEMPLATE_ARGUMENT_KIND_INTEGRAL) \
    _(RESECT_TEMPLATE_ARGUMENT_KIND_TEMPLATE) \
    _(RESECT_TEMPLATE_ARGUMENT_KIND_TEMPLATE_EXPANSION) \
    _(RESECT_TEMPLATE_ARGUMENT_KIND_EXPRESSION) \
    _(RESECT_TEMPLATE_ARGUMENT_KIND_PACK)

/* Generate the resect_template_argument_kind enum */
DEF_ENUM_DECL(resect_template_argument_kind, RESECT_TEMPLATE_ARGUMENT_KIND_CODES)


#define RESECT_LINKAGE_KIND_CODES(_) \
    _(RESECT_LINKAGE_KIND_UNKNOWN) \
    _(RESECT_LINKAGE_KIND_NO_LINKAGE) \
    _(RESECT_LINKAGE_KIND_INTERNAL) \
    _(RESECT_LINKAGE_KIND_UNIQUE_EXTERNAL) \
    _(RESECT_LINKAGE_KIND_EXTERNAL)

/* Generate the resect_linkage_kind enum */
DEF_ENUM_DECL(resect_linkage_kind, RESECT_LINKAGE_KIND_CODES)


#define RESECT_OPTION_INTRINSICS_CODES(_) \
    _(RESECT_OPTION_INTRINSICS_UNKNOWN) \
    _(RESECT_OPTION_INTRINSICS_SSE) \
    _(RESECT_OPTION_INTRINSICS_SSE2) \
    _(RESECT_OPTION_INTRINSICS_SSE3) \
    _(RESECT_OPTION_INTRINSICS_SSE41) \
    _(RESECT_OPTION_INTRINSICS_SSE42) \
    _(RESECT_OPTION_INTRINSICS_AVX) \
    _(RESECT_OPTION_INTRINSICS_AVX2) \
    _(RESECT_OPTION_INTRINSICS_NEON)

/* Generate the resect_option_intrinsic enum */
DEF_ENUM_DECL(resect_option_intrinsic, RESECT_OPTION_INTRINSICS_CODES)


#define RESECT_INCLUSION_STATUS_CODES(_) \
    _(RESECT_INCLUSION_STATUS_EXCLUDED) \
    _(RESECT_INCLUSION_STATUS_WEAKLY_EXCLUDED) \
    _(RESECT_INCLUSION_STATUS_WEAKLY_INCLUDED) \
    _(RESECT_INCLUSION_STATUS_WEAKLY_ENFORCED) \
    _(RESECT_INCLUSION_STATUS_INCLUDED)

/* Generate the resect_inclusion_status enum */
DEF_ENUM_DECL(resect_inclusion_status, RESECT_INCLUSION_STATUS_CODES)


/*
 * RESECT TYPES
 */
typedef struct P_resect_result *resect_result;
typedef struct P_resect_iterator *resect_iterator;
typedef struct P_resect_parse_options *resect_parse_options;
/*
 * RESECT_INVOCATION
 *
 */
typedef struct P_resect_invocation *resect_invocation;

RESECT_API resect_invocation resect_get_current_invocation();


/*
 * SEMANTIC TYPES
 */
typedef struct P_resect_translation_unit *resect_translation_unit;
typedef struct P_resect_collection *resect_collection;
typedef struct P_resect_location *resect_location;
typedef struct P_resect_decl *resect_decl;
typedef struct P_resect_type *resect_type;
typedef struct P_resect_template_argument *resect_template_argument;

/*
 * COLLECTION
 */
RESECT_API resect_iterator resect_collection_iterator(resect_collection collection);

RESECT_API resect_bool resect_iterator_next(resect_iterator iter);

RESECT_API void *resect_iterator_value(resect_iterator iter);

RESECT_API void resect_iterator_free(resect_iterator iter);

/*
 * LOCATION
 */
RESECT_API unsigned int resect_location_line(resect_location location);

RESECT_API unsigned int resect_location_column(resect_location location);

RESECT_API const char *resect_location_name(resect_location location);

/*
 * TYPE
 */
RESECT_API resect_type_kind resect_type_get_kind(resect_type type);

RESECT_API const char *resect_type_get_name(resect_type type);

RESECT_API long long resect_type_sizeof(resect_type type);

RESECT_API long long resect_type_alignof(resect_type type);

RESECT_API long long resect_type_offsetof(resect_type type, const char *field_name);

RESECT_API resect_collection resect_type_fields(resect_type type);

RESECT_API resect_decl resect_type_get_declaration(resect_type type);

RESECT_API resect_type_category resect_type_get_category(resect_type type);

RESECT_API resect_bool resect_type_is_const_qualified(resect_type decl);

RESECT_API resect_bool resect_type_is_pod(resect_type decl);

RESECT_API resect_collection resect_type_template_arguments(resect_type type);

RESECT_API resect_bool resect_type_is_undeclared(resect_type type);

/*
 * TEMPLATE ARGUMENT
 */
RESECT_API resect_template_argument_kind resect_template_argument_get_kind(resect_template_argument arg);

RESECT_API resect_type resect_template_argument_get_type(resect_template_argument arg);

RESECT_API long long resect_template_argument_get_value(resect_template_argument arg);

RESECT_API int resect_template_argument_get_position(resect_template_argument arg);

/*
 * ARRAY
 */
RESECT_API long long resect_array_get_size(resect_type type);

RESECT_API resect_type resect_array_get_element_type(resect_type type);

/*
 * POINTER
 */
RESECT_API resect_type resect_pointer_get_pointee_type(resect_type type);

/*
 * REFERENCE
 */
RESECT_API resect_type resect_reference_get_pointee_type(resect_type type);

RESECT_API resect_bool resect_reference_is_lvalue(resect_type type);

/*
 * FUNCTION PROTO
 */
RESECT_API resect_type resect_function_proto_get_result_type(resect_type type);

RESECT_API resect_collection resect_function_proto_parameters(resect_type type);

RESECT_API resect_bool resect_function_proto_is_variadic(resect_type type);

/*
 * DECLARATION
 */
RESECT_API resect_decl_kind resect_decl_get_kind(resect_decl decl);

RESECT_API const char *resect_decl_get_id(resect_decl decl);

RESECT_API const char *resect_decl_get_name(resect_decl decl);

RESECT_API const char *resect_decl_get_namespace(resect_decl decl);

RESECT_API const char *resect_decl_get_mangled_name(resect_decl decl);

RESECT_API resect_location resect_decl_get_location(resect_decl decl);

RESECT_API const char *resect_decl_get_comment(resect_decl decl);

RESECT_API resect_access_specifier resect_decl_get_access_specifier(resect_decl decl);

RESECT_API resect_decl resect_decl_get_template(resect_decl decl);

RESECT_API resect_bool resect_decl_is_partially_specialized(resect_decl decl);

RESECT_API resect_bool resect_decl_is_template(resect_decl decl);

RESECT_API resect_collection resect_decl_template_parameters(resect_decl decl);

RESECT_API resect_type resect_decl_get_type(resect_decl decl);

RESECT_API resect_decl resect_decl_get_owner(resect_decl decl);

RESECT_API resect_collection resect_decl_template_arguments(resect_decl decl);

RESECT_API const char *resect_decl_get_source(resect_decl decl);

RESECT_API resect_linkage_kind resect_decl_get_linkage(resect_decl decl);

RESECT_API resect_bool resect_decl_is_forward(resect_decl decl);

RESECT_API resect_inclusion_status resect_decl_get_inclusion_status(resect_decl decl);

/*
 * TRANSLATION UNIT
 */
RESECT_API resect_collection resect_unit_declarations(resect_translation_unit unit);

RESECT_API resect_language resect_unit_get_language(resect_translation_unit unit);

/*
 * RECORD
 */
RESECT_API long long resect_field_get_offset(resect_decl decl);

RESECT_API resect_bool resect_field_is_bitfield(resect_decl decl);

RESECT_API long long resect_field_get_width(resect_decl decl);

RESECT_API resect_collection resect_record_fields(resect_decl decl);

RESECT_API resect_collection resect_record_methods(resect_decl decl);

RESECT_API resect_collection resect_record_parents(resect_decl decl);

RESECT_API resect_bool resect_record_is_abstract(resect_decl decl);

/*
 * ENUM
 */
RESECT_API long long resect_enum_constant_value(resect_decl decl);

RESECT_API unsigned long long resect_enum_constant_unsigned_value(resect_decl decl);

RESECT_API resect_bool resect_enum_constant_is_unsigned(resect_decl decl);

RESECT_API resect_collection resect_enum_constants(resect_decl decl);

RESECT_API resect_type resect_enum_get_type(resect_decl decl);

/*
 * FUNCTION
 */
RESECT_API resect_collection resect_function_parameters(resect_decl decl);

RESECT_API resect_type resect_function_get_result_type(resect_decl decl);

RESECT_API resect_storage_class resect_function_get_storage_class(resect_decl decl);

RESECT_API resect_bool resect_function_is_variadic(resect_decl decl);

RESECT_API resect_bool resect_function_is_inlined(resect_decl decl);


/*
 * VARIABLE
 */
RESECT_API resect_variable_kind resect_variable_get_kind(resect_decl decl);

RESECT_API resect_type resect_variable_get_type(resect_decl decl);

RESECT_API long long resect_variable_get_value_as_int(resect_decl decl);

RESECT_API double resect_variable_get_value_as_float(resect_decl decl);

RESECT_API const char *resect_variable_get_value_as_string(resect_decl decl);

RESECT_API resect_storage_class resect_variable_get_storage_class(resect_decl decl);

/*
 * TYPEDEF
 */
RESECT_API resect_type resect_typedef_get_aliased_type(resect_decl decl);

/*
 * METHOD
 */
RESECT_API resect_collection resect_method_parameters(resect_decl decl);

RESECT_API resect_type resect_method_get_result_type(resect_decl decl);

RESECT_API resect_storage_class resect_method_get_storage_class(resect_decl decl);

RESECT_API resect_bool resect_method_is_variadic(resect_decl decl);

RESECT_API resect_bool resect_method_is_pure_virtual(resect_decl decl);

RESECT_API resect_bool resect_method_is_virtual(resect_decl decl);

RESECT_API resect_bool resect_method_is_const(resect_decl decl);

/*
 * MACRO
 */
RESECT_API resect_bool resect_macro_is_function_like(resect_decl decl);

/*
 * TEMPLATE PARAMETER
 */
RESECT_API resect_template_parameter_kind resect_template_parameter_get_kind(resect_decl param);

/*
 * PARSE OPTIONS
 */
RESECT_API resect_parse_options resect_options_create();

RESECT_API void resect_options_add(resect_parse_options opts, const char *key, const char *value);

RESECT_API void resect_options_add_single_arg(resect_parse_options opts, const char *value);

RESECT_API void resect_options_add_concat(resect_parse_options opts, const char *key, const char *value);

RESECT_API void resect_options_include_definition(resect_parse_options opts, const char *name);

RESECT_API void resect_options_include_source(resect_parse_options opts, const char *source);

RESECT_API void resect_options_exclude_definition(resect_parse_options opts, const char *name);

RESECT_API void resect_options_exclude_source(resect_parse_options opts, const char *source);

RESECT_API void resect_options_enforce_definition(resect_parse_options opts, const char *name);

RESECT_API void resect_options_enforce_source(resect_parse_options opts, const char *source);

RESECT_API void resect_options_add_include_path(resect_parse_options opts, const char *path);

RESECT_API void resect_options_add_system_include_path(resect_parse_options opts, const char *path);

RESECT_API void resect_options_add_framework_path(resect_parse_options opts, const char *framework);

RESECT_API void resect_options_add_language(resect_parse_options opts, const char *lang);

RESECT_API void resect_options_add_define(resect_parse_options opts, const char *name, const char *value);

RESECT_API void resect_options_add_standard(resect_parse_options opts, const char *standard);

RESECT_API void resect_options_add_abi(resect_parse_options opts, const char *value);

RESECT_API void resect_options_add_arch(resect_parse_options opts, const char *value);

RESECT_API void resect_options_add_cpu(resect_parse_options opts, const char *value);

RESECT_API void resect_options_add_target(resect_parse_options opts, const char *target);

RESECT_API void resect_options_add_intrinsic(resect_parse_options opts, const char *target);

RESECT_API void resect_options_intrinsic(resect_parse_options opts, resect_option_intrinsic intrinsic);

RESECT_API void resect_options_single_header(resect_parse_options opts);

RESECT_API void resect_options_print_diagnostics(resect_parse_options opts);

RESECT_API void resect_options_free(resect_parse_options opts);

/*
 * PARSER
 */
RESECT_API resect_translation_unit resect_parse(const char *filename, resect_parse_options options);

RESECT_API void resect_free(resect_translation_unit result);

#ifdef __csplusplus
}
#endif
#endif //RESECT_H
