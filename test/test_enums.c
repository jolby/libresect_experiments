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

// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_function_is_going_to_fail);
    RUN_TEST(test_function_is_also_going_to_fail);
    return UNITY_END();
}
