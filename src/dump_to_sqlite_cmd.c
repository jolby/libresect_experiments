//
// Created by Joel Boehland 12/06/2023.
//
#include "../resect.h"
#include "resect_private.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <getopt.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <libgen.h>

#include <clang-c/Index.h>
#include <clang-c/CXCompilationDatabase.h>
#include <clang-c/CXErrorCode.h>

/*
 * Prototype declarations
 */
void print_record_fields(resect_collection fields);
void print_enum_constants(resect_decl decl);
void print_parameters(resect_decl decl);
void print_method_parameters(resect_decl decl);
void print_methods(resect_decl decl);
void print_template_parameters(resect_decl decl);
void print_location(resect_decl decl);
resect_translation_unit resect_parse_tu2(const char *filename,
                                         const char *working_dir,
                                         resect_parse_options options);
int check_file_exists(const char *filename);
int ensure_directory_exists(const char *dirname);
int parse_argv_options(resect_parse_options options, int argc, char **argv);


void print_record_fields(resect_collection fields) {
    resect_iterator field_iter = resect_collection_iterator(fields);
    while (resect_iterator_next(field_iter)) {
        resect_decl field = resect_iterator_value(field_iter);
        printf(" FIELD: %s {offset: %lld} \n", resect_decl_get_name(field), resect_field_get_offset(field));
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

void print_location(resect_decl decl) {
    resect_location loc = resect_decl_get_location(decl);
    printf("  LOCATION: %s:%d\n",
           resect_location_name(loc),
           resect_location_line(loc));
}

resect_translation_unit resect_parse_tu2(const char *filename,
                                         const char *working_dir,
                                         resect_parse_options options) {
    char **clang_argv;
    int clang_argc;
    if (options != NULL) {
        clang_argc = (int) resect_collection_size(options->args);
        clang_argv = malloc(clang_argc * sizeof(char *));

        resect_iterator arg_iter = resect_collection_iterator(options->args);
        int i = 0;
        while (resect_iterator_next(arg_iter)) {
            resect_string arg = resect_iterator_value(arg_iter);
            clang_argv[i++] = (char *) resect_string_to_c(arg);
            printf("CLANG ARG: %s\n", (char *) resect_string_to_c(arg));
        }
        resect_iterator_free(arg_iter);
    } else {
        clang_argc = 0;
        clang_argv = NULL;
    }

    resect_translation_context context = resect_context_create(options);

    CXIndex index = clang_createIndex(0, options->diagnostics ? 1 : 0);


    enum CXTranslationUnit_Flags unitFlags = CXTranslationUnit_DetailedPreprocessingRecord |
                                             CXTranslationUnit_KeepGoing |
                                             CXTranslationUnit_SkipFunctionBodies |
                                             CXTranslationUnit_IncludeAttributedTypes |
                                             CXTranslationUnit_VisitImplicitAttributes;

    if (options->single) {
        unitFlags |= CXTranslationUnit_SingleFileParse;
    }
    CXTranslationUnit tu;
    enum CXErrorCode err = clang_parseTranslationUnit2(index,
                                                       filename,
                                                       (const char *const *) clang_argv,
                                                       clang_argc,
                                                       NULL,
                                                       0,
                                                       0,
                                                       &tu);
    if (err != CXError_Success) {
      fprintf(stderr, "Error creating translation unit: %d\n", err);
    } else {
      fprintf(stderr, "Successfully created translation unit.\n");
    }
    free(clang_argv);
    fprintf(stderr, "Now saving translation unit.\n");
    char *copyForBase = strdup(filename);
    // this might change bytes in copyForBase
    char *base = basename(copyForBase);
    char *tu_filename = malloc(strlen(working_dir) + strlen(filename) + 6); // 6 for "/" + ".pch\0"
    strcpy(tu_filename, working_dir);
    strcat(tu_filename, "/");
    strcat(tu_filename, base);
    strcat(tu_filename, ".pch");
    fprintf(stderr, "Saving translation unit to %s.\n", tu_filename);
    enum CXSaveTranslationUnit_Flags save_err = clang_saveTranslationUnit(tu, tu_filename, clang_defaultSaveOptions(tu));
    if(save_err != CXSaveError_None) {
      fprintf(stderr, "Error saving translation unit: %d\n", save_err);
    } else {
      fprintf(stderr, "Successfully saved translation unit: %s.\n", tu_filename);
    }
    free(copyForBase);
    free(tu_filename);


    CXCursor cursor = clang_getTranslationUnitCursor(tu);

    clang_visitChildren(cursor, resect_visit_context_child, context);

    clang_disposeTranslationUnit(tu);
    clang_disposeIndex(index);

    resect_translation_unit result = malloc(sizeof(struct P_resect_translation_unit));
    result->context = context;
    result->declarations = resect_create_decl_collection(context);

    return result;
}

int check_file_exists(const char *filename) {
  struct stat file_st;
  if (stat(filename, &file_st) == -1) {
    // The file does not exist.
    fprintf(stderr, "Error! Required file doesn't exist. %s \n", filename);
    return -1;
  }
  return 0;
}

int ensure_directory_exists(const char *dirname) {
  struct stat st;
  // Check if the directory exists.
  if (stat(dirname, &st) == -1) {
    // The directory does not exist. Create it.
    mkdir(dirname, 0777);
    if (stat(dirname, &st) == -1) {
      fprintf(stderr, "Error! Required directory doesn't exist and couldn't be created. %s \n", dirname);
      return -1;
    }
  } else {
    // The directory already exists.
    printf("The directory '%s' already exists.\n", dirname);
  }
  return 0;
}

typedef void (*resect_argv_option_handler)(resect_parse_options options, const char *arg);

struct option_with_help {
  struct option opt;
  const char *help_text;
  resect_argv_option_handler handler;
};

static const char *resect_short_options = "a:t:b:c:l:s:D:I:";

static struct option_with_help resect_long_options[] = {
  {.opt = {.name = "add", .has_arg = optional_argument, .flag = 0, .val = 'a'},
   .help_text = "Add a fully formatted argument to pass along to clang. i.e. '--add=-I/usr/include'. Can be used multiple times.",
   .handler = resect_options_add},
  {.opt = {.name = "target", .has_arg = required_argument, .flag = 0, .val = 't'},
   .help_text = "Set the target triple. Ex: 'x86_64-pc-linux-gnu'.",
   .handler = resect_options_add_target},
  {.opt = {.name = "abi", .has_arg = optional_argument, .flag = 0, .val = 'b'},
   .help_text = "Set the ABI. Ex: 'itanium'."
   .handler = resect_options_add_abi},
  {.opt = {.name = "cpu", .has_arg = optional_argument, .flag = 0, .val = 'c'},
   .help_text = "Set the CPU. Ex: 'x86_64'.",
   .handler = resect_options_add_cpu},
  {.opt = {.name = "arch", .has_arg = optional_argument, .flag = 0, .val = 0},
   .help_text = "Set the architecture."
   .handler = resect_options_add_arch},
  {.opt = {.name = "intrinsic", .has_arg = optional_argument, .flag = 0, .val = 0},
   .help_text = "Set the intrinsic. Ex: sse4.2, avx, avx2, etc.",
   .handler = resect_options_intrinsic},
  {.opt = {.name = "language", .has_arg = optional_argument, .flag = 0, .val = 'l'},
   .help_text = "Set the language to parse. Defaults to 'c'. Valid values are 'c' and 'c++' and 'objc'."
   .handler = resect_options_add_language},
  {.opt = {.name = "standard", .has_arg = optional_argument, .flag = 0, .val = 's'},
   .help_text = "Language standard to compile for. Defaults to 'c11' for C and 'c++11' for C++.",
   .handler = resect_options_add_standard},
  {.opt = {.name = "single-header", .has_arg = optional_argument, .flag = 0, .val = 0},
   .help_text = "Parse as a single header. Defaults to false.",
   .handler = resect_options_single_header},
  {.opt = {.name = "print-diagnostics", .has_arg = optional_argument, .flag = 0, .val = 0},
   .help_text = "Print diagnostics. Defaults to false.",
   .handler = resect_options_print_diagnostics},
  {.opt = {.name = "add-defines", .has_arg = optional_argument, .flag = 0, .val = 'D'},
   .help_text = "Add a define. Ex: '-DDEBUG=1'. Can be used multiple times.",
   .handler = resect_options_add_define},
  {.opt = {.name = "include-path", .has_arg = optional_argument, .flag = 0, .val = 'I'},
   .help_text = "Add an include path. Can be used multiple times.",
   .handler = resect_options_add_include_path},
  {.opt = {.name = "system-include-path", .has_arg = optional_argument, .flag = 0, .val = 0},
   .help_text = "Add a system include path. Can be used multiple times.",
   .handler = resect_options_add_system_include_path},
  {.opt = {.name = "include-source", .has_arg = optional_argument, .flag = 0, .val = 0},
   .help_text = "Include a source file for parsing with regex. Can be used multiple times.",
    .handler = resect_options_include_source},
  {.opt = {.name = "exclude-source", .has_arg = optional_argument, .flag = 0, .val = 0},
   .help_text = "Exclude a source file from parsing with regex. Can be used multiple times.",
   .handler = resect_options_exclude_source},
  {.opt = {.name = "include-definition", .has_arg = optional_argument, .flag = 0, .val = 0},
   .help_text = "Include a definition file for parsing with regex. Can be used multiple times.",
   .handler = resect_options_include_definition},
  {.opt = {.name = "exclude-definition", .has_arg = optional_argument, .flag = 0, .val = 0},
   .help_text = "Exclude a definition file from parsing with regex. Can be used multiple times.",
   .handler = resect_options_exclude_definition},
  {.opt = {.name = "enforce-source", .has_arg = optional_argument, .flag = 0, .val = 0},
   .help_text = "Enforce that a source file matching regex is allowed to be included in the translation unit. Can be used multiple times.",
   .handler = resect_options_enforce_source},
  {.opt = {.name = "enforce-definition", .has_arg = optional_argument, .flag = 0, .val = 0},
   .help_text = "Enforce that a definition file matching regex is allowed to be included in the translation unit. Can be used multiple times.",
   .handler = resect_options_enforce_definition},
  {.opt = {.name = 0, .has_arg = 0, .flag = 0, .val = 0},
   .help_text = 0} // Needs to end with a fully zero-filled struct
};

void print_usage() {
  printf("Usage: dump_to_sqlite HEADER_FILE WORKING_DIR [OPTIONS]\n");
  printf("  HEADER_FILE: The header file to parse.\n");
  printf("  WORKING_DIR: The directory to save the sqlite binding DB, the translation unit and any other artifacts.\n");
  for (size_t i = 0; resect_long_options[i].opt.name != NULL; i++) {
    printf("--%s: %s\n", resect_long_options[i].opt.name, resect_long_options[i].help_text);
  }
}

int parse_argv_options(resect_parse_options options, int argc, char **argv) {
  size_t num_resect_options = sizeof(resect_long_options)/sizeof(resect_long_options[0]);
  struct option opts[num_resect_options];

  for(size_t i=0; i<num_resect_options; i++){
    opts[i] = resect_long_options[i].opt;
  }

  printf("XXX START argc: %d, sizeof ONE resect_long_options: %zu sizeof ALL resect_long_options: %zu, number of resect_long_options: %zu\n",
         argc , sizeof(resect_long_options[0]), sizeof(resect_long_options), sizeof(resect_long_options)/sizeof(resect_long_options[0]));
  print_usage();

  int option_index = 0;
  int arg_index = 0;
  while (1) {
    int c = getopt_long(argc, argv, resect_short_options,
                        (struct option*)resect_long_options, &option_index);
    printf("arg_index: %d, short_option: %d, optarg: %s, option_index: %d\n",
           arg_index, c, optarg, option_index);
    // No more options
    if (c == -1)
      break;

    switch (c) {
    case 0:
      // This is a long option. Handle it based on option_index
      switch (option_index) {
      case 0:
        // option_index of 0 corresponds to --add
        resect_options_add(options, optarg, optarg);
        break;
      case 1:
        // option_index of 1 corresponds to --target
        resect_options_add_target(options, optarg);
        break;
      case 2:
        // option_index of 2 corresponds to --abi
        resect_options_add_abi(options, optarg);
        break;
      case 3:
        // option_index of 3 corresponds to --cpu
        resect_options_add_cpu(options, optarg);
        break;
      case 4:
        // option_index of 4 corresponds to --arch
        resect_options_add_arch(options, optarg);
        break;
      case 5:
        // option_index of 5 corresponds to --intrinsic
        /* resect_options_add_intrinsic(options, optarg); */
        printf("INTRINSIC: %s NOT USED. BROKEN\n", optarg);
        break;
      case 6:
        // option_index of 6 corresponds to --language
        resect_options_add_language(options, optarg);
        break;
      case 7:
        // option_index of 8 corresponds to --standard
        resect_options_add_standard(options, optarg);
        break;
      case 8:
        // option_index for single-header
        resect_options_single_header(options);
        break;
      case 9:
        // option_index for print-diagnostics
        resect_options_print_diagnostics(options);
        break;
      case 10:
        // option_index of 10 corresponds to --add-defines
        /* resect_options_add_define(options, optarg); */
        printf("DEFINE: %s NOT USED. BROKEN\n", optarg);
        break;
      case 11:
        // option_index of 11 corresponds to --include-path
        resect_options_add_include_path(options, optarg);
        break;
      case 12:
        // option_index of 12 corresponds to --system-include-path
        resect_options_add_system_include_path(options, optarg);
        break;
      case 13:
        // option_index of 13 corresponds to --include-source
        resect_options_include_source(options, optarg);
        break;
      case 14:
        // option_index of 14 corresponds to --exclude-source
        resect_options_exclude_source(options, optarg);
        break;
      case 15:
        // option_index of 15 corresponds to --include-definition
        resect_options_include_definition(options, optarg);
        break;
      case 16:
        // option_index of 16 corresponds to --exclude-definition
        resect_options_exclude_definition(options, optarg);
        break;
      case 17:
        // option_index of 17 corresponds to --enforce-source
        resect_options_enforce_source(options, optarg);
        break;
      case 18:
        // option_index of 18 corresponds to --enforce-definition
        resect_options_enforce_definition(options, optarg);
        break;
      default:
        printf("Unknown option: %s (option_index: %d)\n", optarg, option_index);
        print_usage();
        break;
      }
      //a:t:b:c:l:s:D:I:
    case 'a':
      resect_options_add(options, optarg, optarg);
      break;
    case 't':
      resect_options_add_target(options, optarg);
      break;
    case 'b':
      resect_options_add_abi(options, optarg);
      break;
    case 'c':
      resect_options_add_cpu(options, optarg);
      break;
    case 'l':
      resect_options_add_language(options, optarg);
      break;
    case 's':
      resect_options_add_standard(options, optarg);
      break;
    case 'D':
      /* resect_options_add_define(options, optarg); */
      printf("DEFINE: %s NOT USED. BROKEN\n", optarg);
      break;
    case 'I':
      resect_options_add_include_path(options, optarg);
      break;
    case '?':
    default:
      print_usage();
      return 1;
    }
  }
  // Process any remaining command line arguments (not options).
  for (option_index = optind; option_index < argc; option_index++) {
    printf ("Non-option argument %s\n", argv[option_index]);
  }
  return 0;
}

int main(int argc, char **argv) {
  /* if(argc != 3) { */
  /*   fprintf(stderr, "Usage: dump_to_sqlite HEADER_FILE WORKING_DIR\n"); */
  /*   exit(-1); */
  /* } */

  resect_parse_options options = resect_options_create();
  parse_argv_options(options, argc, argv);
  exit(0);

  char *filename = argv[1];
  char *working_dir = argv[2];

  if((check_file_exists(filename) != 0) ||
     (ensure_directory_exists(working_dir) != 0)) {
    exit(-1);
  }

  printf("dump_to_sqlite ===> Parsing %s. Using %s as root directory for saved artifacts.\n", filename, working_dir);

  resect_translation_unit context = resect_parse_tu2(filename, working_dir, options);

  resect_options_free(options);

  printf("LANGUAGE: %d\n", resect_unit_get_language(context));

  resect_collection decls = resect_unit_declarations(context);
  resect_iterator decl_iter = resect_collection_iterator(decls);
  while (resect_iterator_next(decl_iter)) {
    resect_decl decl = resect_iterator_value(decl_iter);

    switch (resect_decl_get_kind(decl)) {
    case RESECT_DECL_KIND_STRUCT:
      printf("STRUCT: %s::%s [%d]\n",
             resect_decl_get_namespace(decl),
             resect_decl_get_name(decl),
             resect_decl_get_access_specifier(decl));
      print_location(decl);
      print_record_fields(resect_record_fields(decl));
      print_methods(decl);
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

  resect_free(context);

  return 0;
}
