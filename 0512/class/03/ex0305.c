#include <stdio.h>

int main(void) {
    int x;

    printf("整数xを入力: "); scanf("%d", &x);

    if (x >= 100 && x <= 200)
        puts("xは100〜200の間の数");
    else
        puts("xは100より小さいか200より大きい数");

    return 0;
}
