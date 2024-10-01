#include "unity/unity.h"
#include "../conditionals.h"

void setUp(void) {}

void tearDown(void) {}

void test_is_even() {
    TEST_ASSERT_TRUE(is_even(2));
    TEST_ASSERT_TRUE(is_even(0));
    TEST_ASSERT_FALSE(is_even(1));
    TEST_ASSERT_FALSE(is_even(-1));
    TEST_ASSERT_TRUE(is_even(-2));
    TEST_ASSERT_FALSE(is_even(-3003));
}

void test_get_abs() {
    TEST_ASSERT_EQUAL(5, get_abs(5));
    TEST_ASSERT_EQUAL(5, get_abs(-5));
    TEST_ASSERT_EQUAL(0, get_abs(0));
    TEST_ASSERT_EQUAL(10, get_abs(-10));
}

void test_max() {
    TEST_ASSERT_EQUAL(5, max(5, 3));
    TEST_ASSERT_EQUAL(5, max(3, 5));
    TEST_ASSERT_EQUAL(5, max(5, 5));
}

void test_min() {
    TEST_ASSERT_EQUAL(3, min(5, 3, 4));
    TEST_ASSERT_EQUAL(3, min(3, 5, 4));
    TEST_ASSERT_EQUAL(3, min(4, 5, 3));
}

void test_calculate_letter_grade() {
    TEST_ASSERT_EQUAL('A', calculate_letter_grade(95));
    TEST_ASSERT_EQUAL('B', calculate_letter_grade(85));
    TEST_ASSERT_EQUAL('C', calculate_letter_grade(75));
    TEST_ASSERT_EQUAL('D', calculate_letter_grade(65));
    TEST_ASSERT_EQUAL('F', calculate_letter_grade(55));
}


int main(int argc, char *argv[])
{
    printf("Starting Tests\n");
    printf("-----------------------\n\n");
    UNITY_BEGIN();

    RUN_TEST(test_is_even);
    RUN_TEST(test_get_abs);
    RUN_TEST(test_max);
    RUN_TEST(test_min);
    RUN_TEST(test_calculate_letter_grade);

    int failures = UNITY_END();
    if (!failures)
    {
        printf("\nModule 2 - Conditionals: PASS\n.");
    }

    return failures;
}
