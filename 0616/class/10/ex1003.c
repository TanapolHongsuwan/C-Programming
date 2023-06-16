#include <stdio.h>

int main(void) {
    int x;  // 通常のint型の変数 x
    int *p; // int型のポインタ型の変数 p

    printf("1: x=%5d, &x=%p, p=%p\n", x, &x, p);

    x = 10; // xには整数を代入できる
    printf("2: x=%5d, &x=%p, p=%p\n", x, &x, p);

    p = &x; // pには，（int型の変数の）xのアドレスを代入できる
    printf("3: x=%5d, &x=%p, p=%p\n", x, &x, p);

    *p = 20; // *pとすることで，pが指す変数に間接的にアクセスできる．
             // ここではpはxを指すので *p = 20 は x = 20 と同じ意味になる．
    printf("4: x=%5d, &x=%p, p=%p\n", x, &x, p);

    return 0;
}
