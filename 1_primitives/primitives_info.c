#include <stdio.h>
#include <limits.h>

int main() {
    printf("\n");
    printf("short (signed): %d to %d, %zu bytes\n", SHRT_MIN, SHRT_MAX, sizeof(short));
    printf("int (signed): %d to %d, %zu bytes\n", INT_MIN, INT_MAX, sizeof(int));
    printf("long (signed): %ld to %ld, %zu bytes\n", LONG_MIN, LONG_MAX, sizeof(long));
    printf("long long (signed): %lld to %lld, %zu bytes\n", LLONG_MIN, LLONG_MAX, sizeof(long long));
    printf("\n");
    printf("short (unsigned): %u to %u, %zu bytes\n", 0, USHRT_MAX, sizeof(unsigned short));
    printf("int (unsigned): %u to %u, %zu bytes\n", 0, UINT_MAX, sizeof(unsigned int));
    printf("long (unsigned): %lu to %lu, %zu bytes\n", 0, ULONG_MAX, sizeof(unsigned long));
    printf("long long (unsigned): %llu to %llu, %zu bytes\n", 0, ULLONG_MAX, sizeof(unsigned long long));
    printf("\n");
    printf("char (signed): %d to %d, %zu bytes\n", CHAR_MIN, CHAR_MAX, sizeof(char));
    printf("char (unsigned): %u to %u, %zu bytes\n", 0, UCHAR_MAX, sizeof(unsigned char));
    return 0;
}