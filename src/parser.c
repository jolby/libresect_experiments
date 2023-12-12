#include "../resect.h"
#include "resect_types_private.h"
#include "resect_private.h"

#include <stdlib.h>
#include <string.h>

#include <clang-c/Index.h>

/*
 * PARSER
 */
resect_translation_unit resect_parse(const char *filename, resect_parse_options options) {
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

    resect_iterator es_iter = resect_collection_iterator(resect_options_get_enforced_sources(options));
    while (resect_iterator_next(es_iter)) {
        resect_string arg = resect_iterator_value(es_iter);
        printf("CLANG ENFORCED SOURCE PATTERN: %s\n", (char *) resect_string_to_c(arg));
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

    CXTranslationUnit clangUnit = clang_parseTranslationUnit(index, filename,
                                                             (const char *const *) clang_argv,
                                                             clang_argc,
                                                             NULL,
                                                             0, unitFlags);

    free(clang_argv);

    CXCursor cursor = clang_getTranslationUnitCursor(clangUnit);

    clang_visitChildren(cursor, resect_visit_context_child, context);

    clang_disposeTranslationUnit(clangUnit);
    clang_disposeIndex(index);

    resect_translation_unit result = malloc(sizeof(struct P_resect_translation_unit));
    result->context = context;
    result->declarations = resect_create_decl_collection(context);

    return result;
}
