#include <stdio.h>

#define NUM 5

int main(void) {
    int array[NUM];

    int x = 1;
    for (int i = 0; i < NUM; i++) {
        x *= 2;
        array[i] = x;
    }

    for (int i = 0; i < NUM; i++) {
        printf("2^%d = %d\n", i + 1, array[i]);
    }

    return 0;
}