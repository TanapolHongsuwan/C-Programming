#include <stdio.h>

int add(int, int);

int main(void) {
    int a, b, c;

    printf("整数aを入力: "); scanf("%d", &a);
    printf("整数bを入力: "); scanf("%d", &b);

    c = add(a, b);

    printf("aとbの合計は%dです\n", c);

    return 0;
}

int add (int x, int y) {
    int sum = x + y;
    return sum;
}

