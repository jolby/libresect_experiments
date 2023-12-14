#include "../resect.h"
#include "resect_types_private.h"
#include "resect_private.h"

#include <stdlib.h>
#include <string.h>

#include <clang-c/Index.h>

/*
 * UNIT
 */
resect_collection resect_unit_declarations(resect_translation_unit unit) {
    return unit->declarations;
}

resect_language resect_unit_get_language(resect_translation_unit unit) {
    return resect_get_assumed_language(unit->context);
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
                                                       unitFlags,
                                                       &tu);
    if (err != CXError_Success) {
      fprintf(stderr, "Error creating translation unit: %d\n", err);
      return NULL;
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

void resect_free(resect_translation_unit result) {
    resect_set deallocated = resect_set_create();
    resect_context_free(result->context, deallocated);
    resect_collection_free(result->declarations);
    resect_set_free(deallocated);
    free(result);
}

/*
 * INVOCATION
 */
resect_invocation resect_invocation_create(resect_parse_options options,
                                           resect_error_handler error_handler) {
    resect_invocation result = malloc(sizeof(resect_invocation));
    result->options = resect_options_create();

    return result;
}
