#include <stdio.h>

int main(void) {
    int x, y, max;

    printf("整数xを入力: "); scanf("%d", &x);
    printf("整数yを入力: "); scanf("%d", &y);

    if (x > y)
        max = x;
    else
        max = y;

    printf("2つの整数のうち大きい値は%dです\n", max);

    return 0;
}

