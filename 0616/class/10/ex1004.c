#include <stdio.h>

void scan_positive_int(int *x) {
    do {
        printf("正の整数を入力: ");
        scanf("%d", x); // <- なぜ&xでなくて良いのか？
    } while (*x <= 0);
}

void scan_2_positive_int(int *x, int *y) {
    printf("1つ目の整数を入力\n");
    scan_positive_int(x);
    printf("2つ目の整数を入力\n");
    scan_positive_int(y);
}

int main(void) {
    int x, y;

    scan_2_positive_int(&x, &y);

    printf("x=%d, y=%d\n", x, y);

    return 0;
}
