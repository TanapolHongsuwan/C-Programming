#include <stdio.h>

#define NUM 5

// n個の要素を持つ配列vの要素の値を全てx倍する
void array_multi(int v[], int n, int x) {
    for (int i = 0; i < n; i++)
        v[i] *= x;
}

int main(void) {
    int array[NUM] = {8, 1, 4, 2, 3};
    int a;

    printf("何倍しますか？: "); scanf("%d", &a);
    array_multi(array, NUM, a);

    putchar('{');
    for (int i = 0; i < NUM - 1; i++)
        printf("%d, ", array[i]);
    printf("%d}\n", array[NUM - 1]);

    return 0;
}
