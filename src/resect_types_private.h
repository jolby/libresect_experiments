#ifndef RESECT_TYPES_PRIVATE_H_
#define RESECT_TYPES_PRIVATE_H_

#define CINDEX_NO_EXPORTS

#include <stdlib.h>
#include <getopt.h>
#include "../resect.h"
#include <clang-c/Index.h>

#include "uthash.h"

/*
 * =================================================================================================
 * RESECT INTERNAL TYPES
 * =================================================================================================
 */

/*
 * STRING
 */
typedef struct P_resect_string *resect_string;

struct P_resect_string {
    char *value;
    size_t capacity;
};

/*
 * RETURN TYPE/ERROR CODES/MESSAGES
 */

typedef struct P_resect_error *resect_error;

struct P_resect_error {
  resect_error_code code;
  resect_string message;
  void *extra_data;
};

/*
 * COLLECTION
 */
struct P_resect_collection_element {
    void *value;
    struct P_resect_collection_element *next;
    struct P_resect_collection_element *prev;
};

struct P_resect_collection {
    unsigned int size;
    struct P_resect_collection_element *head, *tail;
};


/*
 * ITERATOR
 */
struct P_resect_iterator {
    struct P_resect_collection_element *head;
    struct P_resect_collection_element *current;
};


/*
 * SET
 */
typedef struct P_resect_set *resect_set;

typedef struct P_resect_set_item {
    void *key;

    UT_hash_handle hh;
} *resect_set_item;

struct P_resect_set {
    resect_set_item head;
};


/*
 * STRING HASH TABLE
 */
typedef struct P_resect_table *resect_table;

struct P_resect_table_entry {
    char *key;
    void *value;

    UT_hash_handle hh;
};

struct P_resect_table {
    struct P_resect_table_entry *head;
};


/*
 * OPTIONS
 */
struct P_resect_parse_options {
   resect_collection args;
   resect_bool single;
   resect_bool diagnostics;

   resect_collection included_definition_patterns;
   resect_collection included_source_patterns;
   resect_collection excluded_definition_patterns;
   resect_collection excluded_source_patterns;
   resect_collection enforced_definition_patterns;
   resect_collection enforced_source_patterns;
};

typedef void (*resect_argv_option_handler)(resect_parse_options options, const char *arg);

struct resect_argv_option_item {
  struct option opt;
  const char *help_text;
  resect_argv_option_handler handler;
};


/*
 * FILTERING
 */
typedef struct P_resect_filtering_context *resect_filtering_context;

struct P_resect_filtering_context {
    resect_collection included_definition_patterns;
    resect_collection included_source_patterns;
    resect_collection excluded_definition_patterns;
    resect_collection excluded_source_patterns;
    resect_collection enforced_definition_patterns;
    resect_collection enforced_source_patterns;

    resect_collection status_stack;
};


/*
 * TRANSLATION CONTEXT
 */
typedef struct P_resect_translation_context *resect_translation_context;

struct P_resect_translation_unit {
    resect_collection declarations;
    resect_translation_context context;
};

enum P_resect_garbage_kind {
    RESECT_GARBAGE_KIND_TEMPLATE_ARGUMENT,
    RESECT_GARBAGE_KIND_DECL,
    RESECT_GARBAGE_KIND_TYPE,
};

struct P_resect_garbage {
    enum P_resect_garbage_kind kind;
    void *data;
};

typedef void (*resect_data_deallocator)(void *data, resect_set deallocated);

struct P_resect_translation_context {
    resect_set exposed_decls;
    resect_table decl_table;
    resect_table template_parameter_table;
    resect_language language;
    resect_filtering_context filtering;

    resect_collection state_stack;
    resect_collection garbage;
    size_t context_depth;
};

typedef void (*resect_error_handler)(resect_error error);
typedef void (*resect_translation_unit_handler)(resect_translation_unit unit);

struct P_resect_invocation {
  int argc;
  char **argv;
  resect_parse_options options;
  resect_translation_unit result;
  resect_collection errors;
  resect_error_handler error_handler;
  resect_translation_unit_handler translation_unit_handler;
  resect_table visitors_table;
};

// TODO: in case of multithreaded usage, this should be thread-local
static resect_invocation THE_INVOCATION = NULL;

/*
 * =================================================================================================
 * SEMANTIC TYPES
 * =================================================================================================
 */

/*
 * DECLARATION
 */
struct P_resect_decl {
    resect_decl_kind kind;
    resect_string id;
    resect_string name;
    resect_string namespace;
    resect_location location;
    resect_string mangled_name;
    resect_string comment;
    resect_access_specifier access;
    resect_linkage_kind linkage;

    resect_bool is_template;
    resect_collection template_parameters;
    resect_collection template_arguments;
    resect_decl template;
    resect_bool partial;
    resect_bool forward;

    resect_decl owner;
    resect_type type;

    resect_string source;

    resect_inclusion_status inclusion_status;

    void *data;
    resect_data_deallocator data_deallocator;
};

typedef struct P_resect_decl_child_visit_data {
    resect_translation_context context;
    resect_decl parent;
} *resect_decl_child_visit_data;


typedef struct {
    resect_decl_kind kind;
    resect_decl decl;
} resect_decl_result;


struct P_function_class_mangling_result {
    CXCursor cursor;
    resect_string mangling;
};

/*
 * TYPE
 */
struct P_resect_type {
    resect_type_kind kind;
    resect_string name;
    unsigned int size;
    unsigned int alignment;
    resect_type_category category;
    resect_collection fields;
    resect_bool const_qualified;
    resect_bool pod;
    resect_bool undeclared;
    resect_collection template_arguments;

    resect_decl decl;

    resect_data_deallocator data_deallocator;
    void *data;
};

typedef struct P_resect_type_visit_data {
    resect_type type;
    resect_translation_context context;
} *resect_type_visit_data;


/*
 * TYPEDEF
 */
typedef struct P_resect_typedef_data {
    resect_type aliased_type;
} *resect_typedef_data;


/*
 * ARRAY
 */
typedef struct P_resect_array_data {
    resect_type type;
    long long size;
} *resect_array_data;


/*
 * POINTER
 */
typedef struct P_resect_pointer_data {
    resect_type type;
} *resect_pointer_data;


/*
 * REFERENCE
 */
typedef struct P_resect_reference_data {
    resect_bool is_lvalue;
    resect_type type;
} *resect_reference_data;


/*
 * ENUM
 */
typedef struct P_resect_enum_constant_data {
    resect_bool is_unsigned;
    unsigned long long unsigned_value;
    long long value;
} *resect_enum_constant_data;


typedef struct P_resect_enum_data {
    resect_collection constants;
    resect_type type;
} *resect_enum_data;


/*
 * VARIABLE
 */
typedef struct P_resect_variable_data {
    resect_variable_kind kind;
    resect_string string_value;
    long long int_value;
    double float_value;
    resect_storage_class storage_class;
} *resect_variable_data;


/*
 * MACRO
 */
typedef struct P_resect_macro_data {
    resect_bool is_function_like;
} *resect_macro_data;


/*
 * TEMPLATE PARAMETER
 */
typedef struct P_resect_template_parameter_data {
    resect_template_parameter_kind kind;
} *resect_template_parameter_data;


/*
 * RECORD
 */
typedef struct P_resect_field_data {
    resect_bool bitfield;
    long long width;
    long long offset;
} *resect_field_data;

typedef struct P_resect_record_data {
    resect_collection fields;
    resect_collection methods;
    resect_collection parents;
    resect_bool abstract;
} *resect_record_data;


/*
 * FUNCTION PROTO
 */
typedef struct P_resect_function_proto_data {
    resect_type result_type;
    resect_bool variadic;
    resect_collection parameters;
} *resect_function_proto_data;


/*
 * FUNCTION
 */
typedef struct P_resect_function_data {
    resect_bool variadic;
    resect_storage_class storage_class;
    resect_collection parameters;
    resect_function_calling_convention calling_convention;
    resect_type result_type;
    resect_bool inlined;
} *resect_function_data;


/*
 * METHOD
 */
typedef struct P_resect_method_data {
    resect_function_data function_data;
    resect_bool pure_virtual;
    resect_bool virtual;
    resect_bool non_mutating;
} *resect_method_data;


#endif // RESECT_TYPES_PRIVATE_H_
