#include <stdio.h>

int main(void) {
    printf("sizeof(char) ... %zu\n", sizeof(char));
    printf("sizeof(short) ... %zu\n", sizeof(short));
    printf("sizeof(int) ... %zu\n", sizeof(int));
    printf("sizeof(long) ... %zu\n", sizeof(long));
    printf("sizeof(long long) ... %zu\n", sizeof(long long));

    int var;
    printf("sizeof(var) ... %zu\n", sizeof(var));
    int array[10];
    printf("sizeof(array) ... %zu\n", sizeof(array));

    return 0;
}