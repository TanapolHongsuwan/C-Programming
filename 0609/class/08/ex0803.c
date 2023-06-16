#include <stdio.h>

// type型の変数xとyの値を入れ替えるマクロ
#define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)
// type型の変数xとyの値を入れ替えるマクロ（悪い例）
#define swap_ng(type, x, y) { type t = x; x = y; y = t; }

int main(void) {
    int x = 5, y = 3;

    if (x > y) 
        swap(int, x, y);
    else
        ; // 何もしない
    
    x = 5, y = 3;
    if (x > y) 
        swap_ng(int, x, y);
    // else
    //     ;

    return 0;
}

