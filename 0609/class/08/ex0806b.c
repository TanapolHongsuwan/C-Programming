#include <stdio.h>

int gcd(int x, int y) {
    if (x > y)
        return gcd(x - y, y);
    else if (x < y)
        return gcd(x, y - x);
    else
        return x;
}

int main(void) {
    int x, y;

    printf("整数xを入力: "); scanf("%d", &x);
    printf("整数yを入力: "); scanf("%d", &y);

    printf("xとyの最大公約数は%dです\n", gcd(x, y));

    return 0;
}
