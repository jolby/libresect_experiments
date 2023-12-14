#include "../resect.h"
#include "resect_types_private.h"
#include "resect_private.h"


/*
 * Prototype declarations
 */
void print_record_fields(resect_collection fields);
void print_enum_constants(resect_decl decl);
void print_parameters(resect_decl decl);
void print_method_parameters(resect_decl decl);
void print_methods(resect_decl decl);
void print_template_parameters(resect_decl decl);
void print_record_struct(resect_decl decl);
void print_location(resect_decl decl);
resect_translation_unit resect_parse_tu2(const char *filename,
                                         const char *working_dir,
                                         resect_parse_options options);


void print_record_fields(resect_collection fields) {
    resect_iterator field_iter = resect_collection_iterator(fields);
    while (resect_iterator_next(field_iter)) {
        resect_decl field = resect_iterator_value(field_iter);
        resect_type field_type = resect_decl_get_type(field);
        printf(" FIELD:      %s {offset: %lld, width(bits): %lld} \n"
               " FIELD TYPE: %s {sizeof: %lld, alignof:     %lld} \n",
               resect_decl_get_name(field),
               resect_field_get_offset(field),
               resect_field_get_width(field),
               resect_type_get_name(field_type),
               resect_type_sizeof(field_type),
               resect_type_alignof(field_type)
               );
    }
    resect_iterator_free(field_iter);
}

void print_enum_constants(resect_decl decl) {
    resect_collection constants = resect_enum_constants(decl);
    resect_iterator constant_iter = resect_collection_iterator(constants);
    while (resect_iterator_next(constant_iter)) {
        resect_decl constant = resect_iterator_value(constant_iter);
        printf(" CONSTANT: %s = %lld\n", resect_decl_get_name(constant), resect_enum_constant_value(constant));
    }
    resect_iterator_free(constant_iter);
}

void print_parameters(resect_decl decl) {
    resect_collection params = resect_function_parameters(decl);
    resect_iterator param_iter = resect_collection_iterator(params);
    while (resect_iterator_next(param_iter)) {
        resect_decl param = resect_iterator_value(param_iter);
        printf(" PARAMETER: %s %s\n",
               resect_decl_get_name(param),
               resect_type_get_name(resect_decl_get_type(param)));
    }
    resect_iterator_free(param_iter);
}

void print_method_parameters(resect_decl decl) {
    resect_collection params = resect_method_parameters(decl);
    resect_iterator param_iter = resect_collection_iterator(params);
    while (resect_iterator_next(param_iter)) {
        resect_decl param = resect_iterator_value(param_iter);
        printf("   PARAMETER: %s %s\n",
               resect_decl_get_name(param),
               resect_type_get_name(resect_decl_get_type(param)));
    }
    resect_iterator_free(param_iter);
}

void print_methods(resect_decl decl) {
    resect_collection methods = resect_record_methods(decl);
    resect_iterator param_iter = resect_collection_iterator(methods);
    while (resect_iterator_next(param_iter)) {
        resect_decl method = resect_iterator_value(param_iter);
        printf(" METHOD: %s -> (%d) %s [%s]\n",
               resect_decl_get_name(method),
               resect_type_get_kind(resect_method_get_result_type(method)),
               resect_type_get_name(resect_method_get_result_type(method)),
               resect_decl_get_mangled_name(method));
        print_method_parameters(method);
    }
    resect_iterator_free(param_iter);
}

void print_template_parameters(resect_decl decl) {
    resect_collection params = resect_decl_template_parameters(decl);
    resect_iterator param_iter = resect_collection_iterator(params);
    while (resect_iterator_next(param_iter)) {
        resect_decl template_param = resect_iterator_value(param_iter);
        printf(" TEMPLATE PARAMETER: %s\n",
               resect_decl_get_name(template_param));
    }
    resect_iterator_free(param_iter);
}

void print_record_struct(resect_decl decl) {
    printf("STRUCT: %s::%s [%d]\n",
           resect_decl_get_namespace(decl),
           resect_decl_get_name(decl),
           resect_decl_get_access_specifier(decl));
    print_location(decl);
    print_record_fields(resect_record_fields(decl));
    print_methods(decl);
}

void print_location(resect_decl decl) {
    resect_location loc = resect_decl_get_location(decl);
    printf("  LOCATION: %s:%d\n",
           resect_location_name(loc),
           resect_location_line(loc));
}

int print_declarations(resect_collection decls) {
  resect_iterator decl_iter = resect_collection_iterator(decls);
  while (resect_iterator_next(decl_iter)) {
    resect_decl decl = resect_iterator_value(decl_iter);

    switch (resect_decl_get_kind(decl)) {
    case RESECT_DECL_KIND_STRUCT:
      print_record_struct(decl);
      /* printf("STRUCT: %s::%s [%d]\n", */
      /*        resect_decl_get_namespace(decl), */
      /*        resect_decl_get_name(decl), */
      /*        resect_decl_get_access_specifier(decl)); */
      /* print_location(decl); */
      /* print_record_fields(resect_record_fields(decl)); */
      /* print_methods(decl); */
      break;
    case RESECT_DECL_KIND_UNION:
      printf("UNION: %s::%s\n",
             resect_decl_get_namespace(decl),
             resect_decl_get_name(decl));
      print_location(decl);
      print_record_fields(resect_record_fields(decl));
      print_methods(decl);
      break;
    case RESECT_DECL_KIND_ENUM:
      printf("ENUM: %s::%s\n",
             resect_decl_get_namespace(decl),
             resect_decl_get_name(decl));
      print_location(decl);
      print_enum_constants(decl);
      break;
    case RESECT_DECL_KIND_FUNCTION:
      printf("FUNCTION: %s::%s -> %s [%s]\n",
             resect_decl_get_namespace(decl),
             resect_decl_get_name(decl),
             resect_type_get_name(resect_function_get_result_type(decl)),
             resect_decl_get_mangled_name(decl));
      print_location(decl);
      print_parameters(decl);
      break;
    case RESECT_DECL_KIND_VARIABLE:
      printf("VARIABLE: %s::%s\n",
             resect_decl_get_namespace(decl),
             resect_decl_get_name(decl));
      break;
    case RESECT_DECL_KIND_TYPEDEF:
      printf("TYPEDEF: %s::%s (%d) {%lld}\n",
             resect_decl_get_namespace(decl),
             resect_decl_get_name(decl),
             resect_type_get_kind(resect_typedef_get_aliased_type(decl)),
             resect_type_sizeof(resect_typedef_get_aliased_type(decl)));
      print_location(decl);
      break;
    case RESECT_DECL_KIND_CLASS:
      printf("CLASS: %s::%s [%lld] (%s)\n",
             resect_decl_get_namespace(decl),
             resect_decl_get_name(decl),
             resect_type_sizeof(resect_decl_get_type(decl)),
             resect_type_get_name(resect_decl_get_type(decl)));
      print_location(decl);
      print_record_fields(resect_record_fields(decl));
      print_methods(decl);
      break;
    case RESECT_DECL_KIND_MACRO:
      printf("MACRO: %s\n",
             resect_decl_get_name(decl));
      break;
    }
    print_template_parameters(decl);
  }
  resect_iterator_free(decl_iter);
}


int main(int argc, char **argv) {
  char *header_file;
  char *working_dir;

  resect_parse_options options = resect_options_create();
  if(parse_argv_options(options, &header_file, &working_dir, argc, argv) != RESECT_OK) {
    fprintf(stderr, "Error! Failed to parse command line options.\n");
    exit(-1);
  }

  if((check_file_exists(header_file) != 0) ||
     (ensure_directory_exists(working_dir) != 0)) {
    exit(-1);
  }
  /* resect_options_print_diagnostics(options); */
  /* resect_options_single_header(options); */

  printf("ast_pprint ===> Parsing %s. Using %s as root directory for saved artifacts.\n", header_file, working_dir);

  resect_translation_unit context = resect_parse_tu2(header_file, working_dir, options);
  if(context == NULL) {
    fprintf(stderr, "Error! Failed to parse translation unit.\n");
    exit(-1);
  }

  resect_options_free(options);

  printf("LANGUAGE: %d\n", resect_unit_get_language(context));

  resect_collection decls = resect_unit_declarations(context);
  print_declarations(decls);
  resect_free(context);

  return RESECT_OK;
}
