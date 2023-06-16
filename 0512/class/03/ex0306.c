#include <stdio.h>

int main(void) {
    int x, y, diff, max;

    printf("整数xを入力: "); scanf("%d", &x);
    printf("整数yを入力: "); scanf("%d", &y);

    if (x > y) {
        diff = x - y;
        max = x;
    } else {
        diff = y - x;
        max = y;
    }

    printf("2つの整数の差は%d\n", diff);
    printf("2つの整数のうち大きい値は%d\n", max);

    return 0;
}
