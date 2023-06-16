#include <stdio.h>

#define N 10

int main(void) {
    int a[N] = {0};

    printf("0から%dの数値を入力(終了するには-1)\n", N - 1);
    int count = 1, v;
    do {
        printf("%d番目の数字: ", count);
        scanf("%d", &v);
        if (v >= 0 && v < N) {
            a[v]++;
            count++;
        }
    } while (v != -1);
    
    for (int i = 0; i < N; i++) {
        printf("%3d: ", i);
        for (int j = 0; j < a[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}