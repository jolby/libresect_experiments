#ifndef RESECT_LONG_OPTIONS_DEF_H_
#define RESECT_LONG_OPTIONS_DEF_H_


// Define the options here, one per line
// Format:  OPTION(name, has_arg, val, help_text, handler)
// ex: OPTION("add", optional_argument, 'a', "Add a fully formatted argument to pass along to clang. Ex: '--add=-I/usr/include'. Can be used multiple times.", resect_options_add_single_arg)

OPTION("add", optional_argument, 'a', "Add a fully formatted argument to pass along to clang. \n"
       "Ex: '--add=-I/usr/include'. Can be used multiple times.",  resect_options_add_single_arg)
OPTION("target", required_argument, 't', "Set the target triple. Ex: 'x86_64-pc-linux-gnu'.", resect_options_add_target)
OPTION("abi", optional_argument, 'b', "Set the ABI. Ex: 'itanium'.", resect_options_add_abi)
OPTION("cpu", optional_argument, 'c', "Set the CPU. Ex: 'x86_64'.", resect_options_add_cpu)

#endif // RESECT_LONG_OPTIONS_DEF_H_
