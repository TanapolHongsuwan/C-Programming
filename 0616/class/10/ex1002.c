#include <stdio.h>

// ポインタxが指す変数に，nを足す関数
void add(int *x, int n) {
    *x += n;
}

// xにnを足す関数
void add_ng(int x, int n) {
    x += n;
}

int main(void) {
    int x, n = 5;

    x = 10;
    printf("x = %d\n", x);

    // xのアドレスを引数として渡すので，xの値が変わる（可能性がある）
    x = 10;
    add(&x, n);
    printf("x = %d\n", x);

    // xの値を引数として渡すので，xの値は変わらない
    x = 10;
    add_ng(x, n);
    printf("x = %d\n", x);

    return 0;
}