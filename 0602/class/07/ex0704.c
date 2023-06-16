#include <stdio.h>

void print8bit(unsigned int x) {
    x %= 256;
    unsigned int m = 128;
    printf("...");
    for (int i = 0; i < 8; i++) {
        printf("%d", x / m);
        x %= m;
        m /= 2;
    }
}

int main(void) {
    unsigned int x, y, n;

    printf("符号無し整数x(0〜255)を入力: "); scanf("%u", &x);
    printf("符号無し整数y(0〜255)を入力: "); scanf("%u", &y);
    printf("符号無し整数n(0〜8)を入力: "); scanf("%u", &n);

    printf("     x : %8u (", x); print8bit(x); puts(")");
    printf("     y : %8u (", y); print8bit(y); puts(")");
    printf("x << %d : %8u (", n, x << n); print8bit(x << n); puts(")");
    printf("x >> %d : %8u (", n, x >> n); print8bit(x >> n); puts(")");
    printf(" x & y : %8u (", x & y); print8bit(x & y); puts(")");
    printf(" x | y : %8u (", x | y); print8bit(x | y); puts(")");
    printf("   ~x  : %8u (", ~x); print8bit(~x); puts(")");

    return 0;
}