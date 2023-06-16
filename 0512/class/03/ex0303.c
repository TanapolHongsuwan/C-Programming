#include <stdio.h>

int main(void) {
    int n, max;

    printf("1つ目の整数を入力: "); scanf("%d", &n);
    max = n;
    printf("2つ目の整数を入力: "); scanf("%d", &n);
    if (n > max) max = n;
    printf("3つ目の整数を入力: "); scanf("%d", &n);
    if (n > max) max = n;

    printf("最大値は%dです\n", max);

    return 0;
}

