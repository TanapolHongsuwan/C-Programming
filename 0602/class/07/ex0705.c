#include <stdio.h>

int main(void) {
    unsigned int x;
    unsigned int n;

    printf("符号無し整数xを入力: "); scanf("%u", &x);
    printf("正の整数n（0〜31）を入力: "); scanf("%u", &n);

    if ((x & (1 << n) != 0)) {
        puts("xのnビット目はセットされている");
    } else {
        puts("xのnビット目はセットされていない");
    }

    unsigned int y = x | (1 << n);
    printf("xのnビット目をセットした数は%uである\n", y);

    return 0;
}
