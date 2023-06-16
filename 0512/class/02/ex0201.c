// 読み込んだ2つの数値の加減乗除を計算する
#include <stdio.h>

int main(void) {
    int x, y;

    puts("2つの整数を入力してください");
    printf("x: "); scanf("%d", &x);
    printf("y: "); scanf("%d", &y);

    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);
    printf("x * y = %d\n", x * y);
    printf("x / y = %d\n", x / y);
    printf("x %% y = %d\n", x % y);

    return 0;
}

