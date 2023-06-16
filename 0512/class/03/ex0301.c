#include <stdio.h>

int main(void) {
    int x;

    printf("整数xを入力: ");
    scanf("%d", &x);

    if (x % 2)
        puts("xは奇数");
    else
        puts("xは偶数");

    return 0;
}

