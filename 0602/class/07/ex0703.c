// 32ビットの符号無し整数を2進数表記で表示するプログラム
#include <stdio.h>
#include <limits.h>

int main(void) {
    unsigned int x;

    printf("符号無し整数を入力: "); scanf("%u", &x);

    unsigned int m = UINT_MAX / 2 + 1; // 2進数で最上位ビットのみ1の整数

    for (int i = 0; i < 32; i++) {
        printf("%d", x / m);
        x %= m;
        m /= 2;

        // 見やすさに配慮して4桁おきにスペースを入れる
        if ((i + 1) % 4 == 0) putchar(' ');
    }
    putchar('\n');

    return 0;
}
