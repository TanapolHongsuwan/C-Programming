#include <stdio.h>
#include <limits.h>

int main(void) {
    puts("[signed]");
    printf("char       %d ... %d\n", CHAR_MIN, CHAR_MAX);
    printf("short      %d ... %d\n", SHRT_MIN, SHRT_MAX);
    printf("int        %d ... %d\n", INT_MIN, INT_MAX);
    printf("long       %ld ... %ld\n", LONG_MIN, LONG_MAX);
    printf("long long  %lld ... %lld\n", LLONG_MIN, LLONG_MAX);

    puts("[unsigned]");
    printf("char       %u ... %u\n", 0U, UCHAR_MAX);
    printf("short      %u ... %u\n", 0U, USHRT_MAX);
    printf("int        %u ... %u\n", 0U, UINT_MAX);
    printf("long       %lu ... %lu\n", 0UL, ULONG_MAX);
    printf("long long  %llu ... %llu\n", 0ULL, ULLONG_MAX);

    return 0;
}
