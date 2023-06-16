// 整数を読み込んで計算をする例
#include <stdio.h>

int main(void) {
    int x, y = 5;

    puts("xの値と5のかけ算の結果を表示します");
    printf("xの値を整数で入力してください: ");
    scanf("%d", &x);

    int mul = x * y;

    printf("xと5のかけ算の結果は%dです\n", mul);

    return 0;
}

