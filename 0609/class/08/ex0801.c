#include <stdio.h>

// xとyのうち大きい方を求める関数形式マクロ
#define max(x, y) ((x) > (y) ? (x) : (y))

int main(void) {
    int x = 2, y = 4;

    printf("max(%d, %d): %d\n", x, y, max(x, y));

    return 0;
}
