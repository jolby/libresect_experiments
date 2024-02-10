#include <stdlib.h>
#include "unity.h"

#include "../resect.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_function_is_going_to_fail(void) {
    //test stuff
}

void test_function_is_also_going_to_fail(void) {
    //more test stuff
}

  /* TEST_ASSERT_EQUAL_INT(0, min); \ */
  /* TEST_ASSERT_EQUAL_INT(count - 1, max); \ */
#define TEST_ENUM_BODY(ENUM_NAME) \
  size_t count = ENUM_NAME ## _count(); \
  int min = ENUM_NAME ## _min(); \
  int max = ENUM_NAME ## _max(); \
  ENUM_NAME ## _dump(); \
  printf("count: %zu, min: %d, max: %d \n", count, min, max); \
  TEST_ASSERT_EQUAL(resect_true, is_ ## ENUM_NAME ## _p(min)); \
  TEST_ASSERT_EQUAL(resect_true, is_ ## ENUM_NAME ## _p(max)); \
  TEST_ASSERT_EQUAL(resect_false, is_ ## ENUM_NAME ## _p(min - 1)); \
  TEST_ASSERT_EQUAL(resect_false, is_ ## ENUM_NAME ## _p(max + 1));

void test_resect_error_code_enum(void) {
  TEST_ENUM_BODY(resect_error_code);
}
void test_resect_decl_kind_enum(void) {
  TEST_ENUM_BODY(resect_decl_kind);
}
void test_resect_access_specifier_enum(void) {
  TEST_ENUM_BODY(resect_access_specifier);
}
void test_resect_type_kind_enum(void) {
  TEST_ENUM_BODY(resect_type_kind);
}
void test_resect_type_category_enum(void) {
  TEST_ENUM_BODY(resect_type_category);
}
void test_resect_function_calling_convention_enum(void) {
  TEST_ENUM_BODY(resect_function_calling_convention);
}
void test_resect_storage_class_enum(void) {
  TEST_ENUM_BODY(resect_storage_class);
}
void test_resect_variable_kind_enum(void) {
  TEST_ENUM_BODY(resect_variable_kind);
}
void test_resect_language_enum(void) {
  TEST_ENUM_BODY(resect_language);
}
void test_resect_template_parameter_kind_enum(void) {
  TEST_ENUM_BODY(resect_template_parameter_kind);
}
void test_resect_template_argument_kind_enum(void) {
  TEST_ENUM_BODY(resect_template_argument_kind);
}
void test_resect_linkage_kind_enum(void) {
  TEST_ENUM_BODY(resect_linkage_kind);
}
void test_resect_option_intrinsic_enum(void) {
  TEST_ENUM_BODY(resect_option_intrinsic);
}
void test_resect_inclusion_status_enum(void) {
  TEST_ENUM_BODY(resect_inclusion_status);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_function_is_going_to_fail);
    RUN_TEST(test_function_is_also_going_to_fail);
    RUN_TEST(test_resect_error_code_enum);
    RUN_TEST(test_resect_decl_kind_enum);
    RUN_TEST(test_resect_access_specifier_enum);
    RUN_TEST(test_resect_type_kind_enum);
    RUN_TEST(test_resect_type_category_enum);
    RUN_TEST(test_resect_function_calling_convention_enum);
    RUN_TEST(test_resect_storage_class_enum);
    RUN_TEST(test_resect_variable_kind_enum);
    RUN_TEST(test_resect_language_enum);
    RUN_TEST(test_resect_template_parameter_kind_enum);
    RUN_TEST(test_resect_template_argument_kind_enum);
    RUN_TEST(test_resect_linkage_kind_enum);
    RUN_TEST(test_resect_option_intrinsic_enum);
    RUN_TEST(test_resect_inclusion_status_enum);

    return UNITY_END();
}
