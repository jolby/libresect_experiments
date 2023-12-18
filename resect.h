#ifndef RESECT_H
#define RESECT_H

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

/* x-macro constructors for error and type
   enums and string tables */
#define AS_BARE(a) a ,
/* For non-contiguous enums */
#define AS_BARE_ASSIGN(a,b) a = b ,
#define AS_STR(a) #a ,
#define AS_PAIR(a, b) {b, #a},

/* For simple contiguous enums */
#define DEF_ENUM_DECL(NAME, ENUMS)             \
    typedef enum { ENUMS(AS_BARE) } NAME; \
    static inline int is_ ## NAME ## _p(NAME val); \
    static inline const char* NAME ## _to_string(NAME val); \
    static inline NAME string_to_ ## NAME(const char* str);

/* For non-contiguous enums */
#define DEF_ENUM_ASSIGN_DECL(NAME, ENUMS)             \
    typedef enum { ENUMS(AS_BARE_ASSIGN) } NAME; \
    static inline int is_ ## NAME ## _p(NAME val); \
    static inline const char* NAME ## _to_string(NAME val); \
    static inline NAME string_to_ ## NAME(const char* str);

#define DEF_ENUM_IMPL(NAME, ENUMS)             \
    typedef struct { int code; const char *NAME; } NAME ## _map; \
    static const NAME ## _ENUMS NAME ## _mapping[] = { ENUMS(AS_PAIR) }; \
    static inline int is_ ## NAME ##_p(NAME val) { \
        for (size_t i = 0; i < (sizeof(NAME ## _mapping)/sizeof(NAME ## _ENUMS)); ++i) { \
            if (NAME ## _mapping[i].code == val) return 1; \
        } \
        return 0; \
    } \
    static inline const char* NAME ## _to_string(NAME val) { \
        for (size_t i = 0; i < (sizeof(NAME ## _mapping)/sizeof(NAME ## _ENUMS)); ++i) { \
            if (NAME ## _mapping[i].code == val) return NAME ## _mapping[i].NAME; \
        } \
        return "Unknown"; \
    } \
    static inline NAME string_to_ ## NAME(const char* str) { \
        for (size_t i = 0; i < (sizeof(NAME ## _mapping)/sizeof(NAME ## _ENUMS)); ++i) { \
            if (strcmp(NAME ## _mapping[i].NAME, str) == 0) return NAME ## _mapping[i].code; \
        } \
        return 0; /* Decide value for error case */ \
    }

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
    _(CLANG_ERR_AST_READ_ERROR) \
    _(NUM_RESECT_ERROR_CODES)


/* Generate the enum */
typedef enum {
    RESECT_ERROR_CODES(AS_BARE)
} resect_error_code;

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
    _(RESECT_DECL_KIND_UNDECLARED) \
    _(NUM_RESECT_DECL_KIND_CODES)

/* Generate the resect_decl_kind enum */
typedef enum {
    RESECT_DECL_KIND_CODES(AS_BARE)
} resect_decl_kind;

/* x-macro constructors for access_specifier enum and string table */
#define RESECT_ACCESS_SPECIFIER_CODES(_) \
    _(RESECT_ACCESS_SPECIFIER_UNKNOWN) \
    _(RESECT_ACCESS_SPECIFIER_PUBLIC) \
    _(RESECT_ACCESS_SPECIFIER_PROTECTED) \
    _(RESECT_ACCESS_SPECIFIER_PRIVATE) \
    _(NUM_RESECT_ACCESS_SPECIFIER_CODES)

/* Generate the resect_access_specifier enum */
typedef enum {
    RESECT_ACCESS_SPECIFIER_CODES(AS_BARE)
} resect_access_specifier;

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
/* typedef enum { */
/*     RESECT_TYPE_KIND_CODES(AS_BARE_ASSIGN) */
/* } resect_type_kind; */

typedef enum {
    RESECT_TYPE_CATEGORY_UNKNOWN = 0,
    RESECT_TYPE_CATEGORY_ARITHMETIC = 1,
    RESECT_TYPE_CATEGORY_POINTER = 2,
    RESECT_TYPE_CATEGORY_REFERENCE = 3,
    RESECT_TYPE_CATEGORY_ARRAY = 4,
    RESECT_TYPE_CATEGORY_UNIQUE = 5,
    RESECT_TYPE_CATEGORY_AUX = 6
} resect_type_category;

typedef enum {
    RESECT_FUNCTION_CALLING_CONVENTION_UNKNOWN = 0,
    RESECT_FUNCTION_CALLING_CONVENTION_DEFAULT = 1,
    RESECT_FUNCTION_CALLING_CONVENTION_C = 2,
    RESECT_FUNCTION_CALLING_CONVENTION_X86_STDCALL = 3,
    RESECT_FUNCTION_CALLING_CONVENTION_X86_FASTCALL = 4,
    RESECT_FUNCTION_CALLING_CONVENTION_X86_THISCALL = 5,
    RESECT_FUNCTION_CALLING_CONVENTION_X86_REGCALL = 6,
    RESECT_FUNCTION_CALLING_CONVENTION_X86_VECTORCALL = 7,
    RESECT_FUNCTION_CALLING_CONVENTION_X86_PASCAL = 8,
    RESECT_FUNCTION_CALLING_CONVENTION_X86_64_WIN64 = 9,
    RESECT_FUNCTION_CALLING_CONVENTION_X86_64_SYSV = 10,
    RESECT_FUNCTION_CALLING_CONVENTION_AARCH64_VECTORCALL = 11,
    RESECT_FUNCTION_CALLING_CONVENTION_AAPCS = 12,
    RESECT_FUNCTION_CALLING_CONVENTION_AAPCS_VFP = 13,
    RESECT_FUNCTION_CALLING_CONVENTION_INTEL_OCL_BICC = 14,
    RESECT_FUNCTION_CALLING_CONVENTION_SWIFT = 15,
    RESECT_FUNCTION_CALLING_CONVENTION_PRESERVE_MOST = 16,
    RESECT_FUNCTION_CALLING_CONVENTION_PRESERVE_ALL = 17,
} resect_function_calling_convention;


typedef enum {
    RESECT_STORAGE_CLASS_UNKNOWN = 0,
    RESECT_STORAGE_CLASS_NONE = 1,
    RESECT_STORAGE_CLASS_EXTERN = 2,
    RESECT_STORAGE_CLASS_STATIC = 3,
    RESECT_STORAGE_CLASS_PRIVATE_EXTERN = 4,
    RESECT_STORAGE_CLASS_OPENCL_WORKGROUP_LOCAL = 5,
    RESECT_STORAGE_CLASS_AUTO = 6,
    RESECT_STORAGE_CLASS_REGISTER = 7,
} resect_storage_class;


typedef enum {
    RESECT_VARIABLE_TYPE_UNKNOWN = 0,
    RESECT_VARIABLE_TYPE_INT,
    RESECT_VARIABLE_TYPE_FLOAT,
    RESECT_VARIABLE_TYPE_STRING,
    RESECT_VARIABLE_TYPE_OTHER,
} resect_variable_kind;

typedef enum {
    RESECT_LANGUAGE_UNKNOWN = 0,
    RESECT_LANGUAGE_C,
    RESECT_LANGUAGE_CXX,
    RESECT_LANGUAGE_OBJC,

    RESECT_LANGUAGE__LAST = RESECT_LANGUAGE_OBJC,
} resect_language;

typedef enum {
    RESECT_TEMPLATE_PARAMETER_KIND_UNKNOWN = 0,
    RESECT_TEMPLATE_PARAMETER_KIND_TEMPLATE,
    RESECT_TEMPLATE_PARAMETER_KIND_TYPE,
    RESECT_TEMPLATE_PARAMETER_KIND_NON_TYPE,
} resect_template_parameter_kind;

typedef enum {
    RESECT_TEMPLATE_ARGUMENT_KIND_UNKNOWN = 0,
    RESECT_TEMPLATE_ARGUMENT_KIND_NULL,
    RESECT_TEMPLATE_ARGUMENT_KIND_TYPE,
    RESECT_TEMPLATE_ARGUMENT_KIND_DECLARATION,
    RESECT_TEMPLATE_ARGUMENT_KIND_NULL_PTR,
    RESECT_TEMPLATE_ARGUMENT_KIND_INTEGRAL,
    RESECT_TEMPLATE_ARGUMENT_KIND_TEMPLATE,
    RESECT_TEMPLATE_ARGUMENT_KIND_TEMPLATE_EXPANSION,
    RESECT_TEMPLATE_ARGUMENT_KIND_EXPRESSION,
    RESECT_TEMPLATE_ARGUMENT_KIND_PACK
} resect_template_argument_kind;

typedef enum {
    RESECT_LINKAGE_KIND_UNKNOWN = 0,
    RESECT_LINKAGE_KIND_NO_LINKAGE = 1,
    RESECT_LINKAGE_KIND_INTERNAL = 2,
    RESECT_LINKAGE_KIND_UNIQUE_EXTERNAL = 3,
    RESECT_LINKAGE_KIND_EXTERNAL = 4
} resect_linkage_kind;

typedef enum {
    RESECT_OPTION_INTRINSICS_UNKNOWN = 0,
    RESECT_OPTION_INTRINSICS_SSE = 1,
    RESECT_OPTION_INTRINSICS_SSE2 = 2,
    RESECT_OPTION_INTRINSICS_SSE3 = 3,
    RESECT_OPTION_INTRINSICS_SSE41 = 4,
    RESECT_OPTION_INTRINSICS_SSE42 = 5,
    RESECT_OPTION_INTRINSICS_AVX = 6,
    RESECT_OPTION_INTRINSICS_AVX2 = 7,
    RESECT_OPTION_INTRINSICS_NEON = 8,
} resect_option_intrinsic;

typedef enum {
    RESECT_INCLUSION_STATUS_EXCLUDED = 0,
    RESECT_INCLUSION_STATUS_WEAKLY_EXCLUDED = 1,
    RESECT_INCLUSION_STATUS_WEAKLY_INCLUDED = 2,
    RESECT_INCLUSION_STATUS_WEAKLY_ENFORCED = 3,
    RESECT_INCLUSION_STATUS_INCLUDED = 4
} resect_inclusion_status;

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
