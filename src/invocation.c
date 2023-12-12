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
