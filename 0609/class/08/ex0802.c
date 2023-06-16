#include <stdio.h>

// xの2乗を求める関数形式マクロ
#define sqr(x) ((x) * (x))

// xの2乗を求める関数形式マクロ（悪い例）
#define sqr_ng(x) x * x

int main(void) {
    int x = 2, y = 3;

    // ((x) * (x))
    printf("sqr(%d): %d\n", x, sqr(x));
    // x * x
    printf("sqr_ng(%d): %d\n", x, sqr_ng(x));

    // ((x + y) * (x + y))
    printf("sqr(%d + %d): %d\n", x, y, sqr(x + y));
    // x + y * x + y
    printf("sqr_ng(%d + %d): %d\n", x, y, sqr_ng(x + y));

    return 0;
}
