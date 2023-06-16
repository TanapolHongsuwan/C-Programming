#include <stdio.h>

int gcd(int x, int y) {
    while (x != y) {
        if (x > y)
            x -= y;
        else
            y -= x;
    }
    return x;
}

int main(void) {
    int x, y;

    printf("整数xを入力: "); scanf("%d", &x);
    printf("整数yを入力: "); scanf("%d", &y);

    printf("xとyの最大公約数は%dです\n", gcd(x, y));

    return 0;
}
