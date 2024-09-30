#include "unity/unity.h"
#include "../primitives.h"

void setUp(void) {}

void tearDown(void) {}

void test_primitives_info_ran() {
    FILE *file = fopen("primitives_info", "r");
    if (file == NULL) {
        TEST_FAIL_MESSAGE("Make sure to run > make primitives_info");
        return;
    }
}

void test_multiply_by_two() {
    TEST_ASSERT_EQUAL(4, multiply_by_two(2));
    TEST_ASSERT_EQUAL(0, multiply_by_two(0));
    TEST_ASSERT_EQUAL(-2, multiply_by_two(-1));
}

void test_divide_by_two() {
    TEST_ASSERT_EQUAL(2.0, divide_by_two(4));
    TEST_ASSERT_EQUAL(0.0, divide_by_two(0));
    TEST_ASSERT_EQUAL(-2.0, divide_by_two(-4));
}

void test_remainder_of_two() {
    TEST_ASSERT_EQUAL(0, remainder_of_two(4));
    TEST_ASSERT_EQUAL(1, remainder_of_two(5));
    TEST_ASSERT_EQUAL(0, remainder_of_two(0));
}

int main(int argc, char *argv[])
{
    printf("Starting Tests\n");
    printf("-----------------------\n\n");
    UNITY_BEGIN();

    RUN_TEST(test_primitives_info_ran);
    RUN_TEST(test_multiply_by_two);
    RUN_TEST(test_divide_by_two);
    RUN_TEST(test_remainder_of_two);

    int failures = UNITY_END();
    if (!failures)
    {
        printf("\nModule 1 - Primitives: PASS\n.");
    }

    return failures;
}
