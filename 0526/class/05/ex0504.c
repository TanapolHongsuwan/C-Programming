#include <stdio.h>

#define NUM 5

int main(void) {
    int v[NUM];

    printf("%d個の整数を入力\n", NUM);
    for (int i = 0; i < NUM; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < NUM; i++) {
        if (v[i] > v[i + 1]) {
            int tmp = v[i];
            v[i] = v[i + 1];
            v[i + 1] = tmp;
        }
    }

    for (int i = 0; i < NUM; i++) {
        printf("%d ", v[i]);
    }
    putchar('\n');

    return 0;
}
