#include "unity/unity.h"

void setUp(void) {}

void tearDown(void) {}

void test_hello_world(void)
{
    FILE *fp;
    static char result[1035];

    fp = popen("./hello_world", "r");

    if (fp == NULL)
    {
        TEST_FAIL_MESSAGE("Failed to run hello_world.");
        pclose(fp);
        return;
    }

    if (fgets(result, sizeof(result) - 1, fp) == NULL)
    {
        TEST_FAIL_MESSAGE("Failed to read output from hello_world.");
        pclose(fp);
        return;
    }

    pclose(fp);

    TEST_ASSERT_EQUAL_STRING("hello world", result);
}

int main(void)
{
    printf("Starting Tests\n");
    printf("-----------------------\n\n");
    UNITY_BEGIN();
    RUN_TEST(test_hello_world);

    int failures = UNITY_END();
    if (!failures)
    {
        printf("\nModule 0 - Introduction: PASS\n.");
    }

    return failures;
}
