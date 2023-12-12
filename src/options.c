#include "../resect.h"
#include "resect_types_private.h"
#include "resect_private.h"

#include <stdlib.h>
#include <string.h>
#include <getopt.h>

#include <clang-c/Index.h>

/*
 * OPTIONS
 */
void resect_options_add(resect_parse_options opts, const char *key, const char *value) {
    resect_collection_add(opts->args, resect_string_from_c(key));
    resect_collection_add(opts->args, resect_string_from_c(value));
}

void resect_options_add_single_arg(resect_parse_options opts, const char *value) {
    resect_collection_add(opts->args, resect_string_from_c(value));
}
void resect_options_add_concat(resect_parse_options opts, const char *key, const char *value) {
    resect_collection_add(opts->args, resect_string_format("%s%s", key, value));
}

resect_parse_options resect_options_create() {
    resect_parse_options opts = malloc(sizeof(struct P_resect_parse_options));
    opts->args = resect_collection_create();
    opts->single = resect_false;
    opts->diagnostics = resect_false;

    opts->included_definition_patterns = resect_collection_create();
    opts->included_source_patterns = resect_collection_create();
    opts->excluded_definition_patterns = resect_collection_create();
    opts->excluded_source_patterns = resect_collection_create();

    opts->enforced_definition_patterns = resect_collection_create();
    opts->enforced_source_patterns = resect_collection_create();

    /* Move the responsibility of setting these default options to the user of the library

      resect_collection_add(opts->args, resect_string_from_c("-ferror-limit=0"));
      resect_collection_add(opts->args, resect_string_from_c("-fno-implicit-templates"));
      resect_collection_add(opts->args, resect_string_from_c("-fc++-abi=itanium"));
      resect_collection_add(opts->args, resect_string_from_c("-Wno-nonnull"));
    */
    return opts;
}

void resect_options_free(resect_parse_options opts) {
    resect_string_collection_free(opts->args);

    resect_string_collection_free(opts->included_definition_patterns);
    resect_string_collection_free(opts->included_source_patterns);

    resect_string_collection_free(opts->excluded_definition_patterns);
    resect_string_collection_free(opts->excluded_source_patterns);

    resect_string_collection_free(opts->enforced_definition_patterns);
    resect_string_collection_free(opts->enforced_source_patterns);

    free(opts);
}

void resect_options_include_definition(resect_parse_options opts, const char *name) {
    resect_collection_add(opts->included_definition_patterns, resect_string_from_c(name));
}

void resect_options_include_source(resect_parse_options opts, const char *name) {
    resect_collection_add(opts->included_source_patterns, resect_string_from_c(name));
}

void resect_options_exclude_definition(resect_parse_options opts, const char *name) {
    resect_collection_add(opts->excluded_definition_patterns, resect_string_from_c(name));
}

void resect_options_exclude_source(resect_parse_options opts, const char *name) {
    resect_collection_add(opts->excluded_source_patterns, resect_string_from_c(name));
}

void resect_options_enforce_definition(resect_parse_options opts, const char *name) {
    fprintf(stdout, "XXX ADD ENFORCE DEFINITION: %s\n", name);
    resect_collection_add(opts->enforced_definition_patterns, resect_string_from_c(name));
}

void resect_options_enforce_source(resect_parse_options opts, const char *name) {
    fprintf(stdout, "XXX ADD ENFORCE SOURCE: %s\n", name);
    resect_collection_add(opts->enforced_source_patterns, resect_string_from_c(name));
}

resect_collection resect_options_get_included_definitions(resect_parse_options opts) {
    return opts->included_definition_patterns;
}

resect_collection resect_options_get_included_sources(resect_parse_options opts) {
    return opts->included_source_patterns;
}

resect_collection resect_options_get_excluded_definitions(resect_parse_options opts) {
    return opts->excluded_definition_patterns;
}

resect_collection resect_options_get_excluded_sources(resect_parse_options opts) {
    return opts->excluded_source_patterns;
}

resect_collection resect_options_get_enforced_definitions(resect_parse_options opts) {
    return opts->enforced_definition_patterns;
}

resect_collection resect_options_get_enforced_sources(resect_parse_options opts) {
    return opts->enforced_source_patterns;
}

void resect_options_add_include_path(resect_parse_options opts, const char *path) {
    /* resect_options_add(opts, "--include-directory", path); */
    resect_options_add(opts, "-I", path);
}

void resect_options_add_system_include_path(resect_parse_options opts, const char *path) {
    /* resect_options_add(opts, "--include-directory", path); */
    resect_options_add(opts, "-system", path);
}
void resect_options_add_framework_path(resect_parse_options opts, const char *framework) {
    resect_options_add_concat(opts, "-F", framework);
}

void resect_options_add_abi(resect_parse_options opts, const char *value) {
    resect_options_add_concat(opts, "-mabi=", value);
}

void resect_options_add_arch(resect_parse_options opts, const char *value) {
    resect_options_add_concat(opts, "-march=", value);
}

void resect_options_add_cpu(resect_parse_options opts, const char *value) {
    resect_options_add_concat(opts, "-mcpu=", value);
}

void resect_options_add_language(resect_parse_options opts, const char *lang) {
    resect_options_add_concat(opts, "--language=", lang);
}

void resect_options_add_define(resect_parse_options opts, const char *name, const char *value) {
    resect_string define = resect_string_format("-D%s=%s", name, value);
    resect_collection_add(opts->args, define);
}

void resect_options_add_standard(resect_parse_options opts, const char *standard) {
    resect_options_add_concat(opts, "--std=", standard);
}

void resect_options_add_target(resect_parse_options opts, const char *target) {
    resect_options_add_concat(opts, "--target=", target);
}

void resect_options_intrinsic(resect_parse_options opts, resect_option_intrinsic intrinsic) {
    if (intrinsic == RESECT_OPTION_INTRINSICS_NEON) {
        resect_options_add_concat(opts, "-mfpu=neon", "");
        return;
    }

    char *intrinsic_name;
    switch (intrinsic) {
        case RESECT_OPTION_INTRINSICS_SSE:
            intrinsic_name = "sse";
            break;
        case RESECT_OPTION_INTRINSICS_SSE2:
            intrinsic_name = "sse2";
            break;
        case RESECT_OPTION_INTRINSICS_SSE3:
            intrinsic_name = "sse3";
            break;
        case RESECT_OPTION_INTRINSICS_SSE41:
            intrinsic_name = "sse4.1";
            break;
        case RESECT_OPTION_INTRINSICS_SSE42:
            intrinsic_name = "sse4.2";
            break;
        case RESECT_OPTION_INTRINSICS_AVX:
            intrinsic_name = "avx";
            break;
        case RESECT_OPTION_INTRINSICS_AVX2:
            intrinsic_name = "avx2";
            break;
        default:
            return;
    }
    resect_options_add_concat(opts, "-m", intrinsic_name);
}

void resect_options_single_header(resect_parse_options opts) {
    opts->single = resect_true;
}

void resect_options_print_diagnostics(resect_parse_options opts) {
    opts->diagnostics = resect_true;
}


/*
 * ARGV OPTIONS
 */
static const char *resect_short_options = "a:t:b:c:l:s:D:I:";

static struct resect_argv_option_item resect_long_options[] = {
  {.opt = {.name = "add", .has_arg = optional_argument, .flag = 0, .val = 'a'},
   .help_text = "Add a fully formatted argument to pass along to clang. Ex: '--add=-I/usr/include'. Can be used multiple times.",
   .handler = resect_options_add_single_arg},
  {.opt = {.name = "target", .has_arg = required_argument, .flag = 0, .val = 't'},
   .help_text = "Set the target triple. Ex: 'x86_64-pc-linux-gnu'.",
   .handler = resect_options_add_target},
  {.opt = {.name = "abi", .has_arg = optional_argument, .flag = 0, .val = 'b'},
   .help_text = "Set the ABI. Ex: 'itanium'.",
   .handler = resect_options_add_abi},
  {.opt = {.name = "cpu", .has_arg = optional_argument, .flag = 0, .val = 'c'},
   .help_text = "Set the CPU. Ex: 'x86_64'.",
   .handler = resect_options_add_cpu},
  {.opt = {.name = "arch", .has_arg = optional_argument, .flag = 0, .val = 0},
   .help_text = "Set the architecture. Ex: 'x86-64'.",
   .handler = resect_options_add_arch},
  /* {.opt = {.name = "intrinsic", .has_arg = optional_argument, .flag = 0, .val = 0}, */
  /*  .help_text = "Set the intrinsic. Ex: sse4.2, avx, avx2, etc.", */
  /*  .handler = resect_options_intrinsic}, */
  {.opt = {.name = "language", .has_arg = optional_argument, .flag = 0, .val = 'l'},
   .help_text = "Set the language to parse. Defaults to 'c'. Valid values are 'c' and 'c++' and 'objc'.",
   .handler = resect_options_add_language},
  {.opt = {.name = "standard", .has_arg = optional_argument, .flag = 0, .val = 's'},
   .help_text = "Language standard to compile for. Defaults to 'c11' for C and 'c++11' for C++.",
   .handler = resect_options_add_standard},
  /* {.opt = {.name = "single-header", .has_arg = optional_argument, .flag = 0, .val = 0}, */
  /*  .help_text = "Parse as a single header. Defaults to false.", */
  /*  .handler = resect_options_single_header}, */
  /* {.opt = {.name = "print-diagnostics", .has_arg = optional_argument, .flag = 0, .val = 0}, */
  /*  .help_text = "Print diagnostics. Defaults to false.", */
  /*  .handler = resect_options_print_diagnostics}, */
  {.opt = {.name = "add-defines", .has_arg = optional_argument, .flag = 0, .val = 'D'},
   .help_text = "Add a define. Ex: '-DDEBUG=1'. Can be used multiple times.",
   .handler = resect_options_add_single_arg},
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
   .help_text = "Include a definition from parsing with regex. Can be used multiple times.",
   .handler = resect_options_include_definition},
  {.opt = {.name = "exclude-definition", .has_arg = optional_argument, .flag = 0, .val = 0},
   .help_text = "Exclude a definition from parsing with regex. Can be used multiple times.",
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
  printf("OPTIONS: =================================================\n");
  for (size_t i = 0; resect_long_options[i].opt.name != NULL; i++) {
    if(resect_long_options[i].opt.val == 0) {
      printf("--%s: %s\n", resect_long_options[i].opt.name, resect_long_options[i].help_text);
    } else {
      printf("-%c, --%s: %s\n", resect_long_options[i].opt.val, resect_long_options[i].opt.name, resect_long_options[i].help_text);
    }
  }
}

resect_error_code parse_argv_options(resect_parse_options options, char **header_file_out, char **working_dir_out,
                       int argc, char **argv) {
  size_t num_resect_options = sizeof(resect_long_options)/sizeof(resect_long_options[0]);
  struct option opts[num_resect_options];

  for(size_t i=0; i<num_resect_options; i++){
    opts[i] = resect_long_options[i].opt;
  }

  printf("XXX START argc: %d, sizeof ONE resect_long_options: %zu sizeof ALL resect_long_options: %zu, number of resect_long_options: %zu\n",
         argc , sizeof(resect_long_options[0]), sizeof(resect_long_options), sizeof(resect_long_options)/sizeof(resect_long_options[0]));
  /* print_usage(); */

  int option_index = 0;
  int arg_index = 0;
  while (1) {
    int c = getopt_long(argc, argv, resect_short_options,
                        (struct option*)opts, &option_index);
    // No more options
    if (c == -1)
      break;

    arg_index++;
    struct option opt = opts[option_index];
    if(c == 0) {
    printf("arg_index: %d, option: %s, optarg: %s \n",
           arg_index, opt.name, optarg);
    } else {
    printf("arg_index: %d, option: %s, short_option: %c, optarg: %s \n",
           arg_index, opt.name, c, optarg);
    }
    // If an option is encountered, call the handler function
    if(c != '?' && resect_long_options[option_index].handler != NULL) {
      resect_long_options[option_index].handler(options, optarg);
    } else {
      printf("Unknown option: %c\n", c);

      print_usage();
      return RESECT_ERR_INVALID_ARGUMENT;
    }
  }
  // Process any remaining command line arguments (not options).
  // This should be the header file and working directory.
  int remaining_args = argc - optind;
  if(remaining_args != 2) {
    printf("Error! Expected 2 remaining arguments: [HEADER,WORK_DIR] but got %d.\n", remaining_args);
    print_usage();
    return RESECT_ERR_INVALID_ARGUMENT;
  }
  // Get header file and working directory
  *header_file_out = argv[optind];
  *working_dir_out = argv[optind+1];

  return RESECT_OK;
}
