// X-macros for defining the default long options for resect
// Define the options here, one per line
// Format:  OPTION(name, has_arg, val, help_text, handler)
// ex: OPTION("add", optional_argument, 'a', "Add a fully formatted argument to pass along to clang. Ex: '-v'.", resect_options_add_single_arg)
#define RESECT_DEFAULT_OPTIONS \
  OPTION("add", optional_argument, 'a', "Add a fully formatted argument to pass along to clang. Ex: '--add=-I/usr/include'. Can be used multiple times.", resect_options_add_single_arg) \
  OPTION("target", required_argument, 't', "Set the target triple. Ex: 'x86_64-pc-linux-gnu'.", resect_options_add_target) \
  OPTION("abi", optional_argument, 'b', "Set the ABI. Ex: 'itanium'.", resect_options_add_abi) \
  OPTION("cpu", optional_argument, 'c', "Set the CPU. Ex: 'x86_64'.", resect_options_add_cpu) \
  OPTION("arch", optional_argument, 0, "Set the architecture. Ex: 'x86-64'.", resect_options_add_arch) \
  OPTION("intrinsic", optional_argument, 0, "Set the intrinsic. Ex: sse4.2, avx, avx2, etc.", resect_options_add_intrinsic) \
  OPTION("language", optional_argument, 'l', "Set the language to parse. Defaults to 'c'. Valid values are 'c' and 'c++' and 'objc'.", resect_options_add_language) \
  OPTION("standard", optional_argument, 's', "Language standard to compile for. Defaults to 'c11' for C and 'c++11' for C++.", resect_options_add_standard) \
  OPTION("single-header", optional_argument, 0, "Parse as a single header. Defaults to false.", _resect_options_toggle_single_header) \
  OPTION("print-diagnostics", optional_argument, 0, "Print diagnostics. Defaults to false.", _resect_options_toggle_print_diagnostics) \
  OPTION("add-defines", optional_argument, 'D', "Add a define. Ex: '-DDEBUG=1'. Can be used multiple times.", resect_options_add_single_arg) \
  OPTION("include-path", optional_argument, 'I', "Add an include path. Can be used multiple times.", resect_options_add_include_path) \
  OPTION("system-include-path", optional_argument, 0, "Add a system include path. Can be used multiple times.", resect_options_add_system_include_path) \
  OPTION("include-source", optional_argument, 0, "Include a source file for parsing with regex. Can be used multiple times.", resect_options_include_source) \
  OPTION("exclude-source", optional_argument, 0, "Exclude a source file from parsing with regex. Can be used multiple times.", resect_options_exclude_source) \
  OPTION("include-definition", optional_argument, 0, "Include a definition from parsing with regex. Can be used multiple times.", resect_options_include_definition) \
  OPTION("exclude-definition", optional_argument, 0, "Exclude a definition from parsing with regex. Can be used multiple times.", resect_options_exclude_definition) \
  OPTION("enforce-source", optional_argument, 0, "Enforce that a source file matching regex is allowed to be included in the translation unit. Can be used multiple times.", resect_options_enforce_source) \
  OPTION("enforce-definition", optional_argument, 0, "Enforce that a definition file matching regex is allowed to be included in the translation unit. Can be used multiple times.", resect_options_enforce_definition)
