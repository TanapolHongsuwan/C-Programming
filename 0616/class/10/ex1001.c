#include <stdio.h>

int main(void) {
    int x;  // 通常のint型の変数 x
    int *p; // int型のポインタ型の変数 p

    x = 10; // xには整数を代入できる
    p = &x; // pには，（int型の変数の）xのアドレスを代入できる

    printf("x = %d\n", x);

    *p = 20; // *pとすることで，pが指す変数に間接的にアクセスできる．
             // ここではpはxを指すので *p = 20 は x = 20 と同じ意味になる．
    
    printf("x = %d\n", x);

    return 0;
}
