#include <stdio.h>

int main(void) {
    // ポインタpによる文字列
    // pは文字列リテラル "ABC" の先頭アドレスを指す（char型配列ではない）
    char *p = "ABC";

    // 任意の位置を先頭アドレスとする文字列として表示などが可能
    printf("p   : %s\n", p);
    printf("p+1 : %s\n", p+1);
    printf("p+2 : %s\n", p+2);

    // 1文字ずつ（配列のように）アクセスすることも可能
    // 最後にナル文字になるのも同じ
    for (int i = 0; p[i] != '\0'; i++) 
        putchar(p[i]);
    putchar('\n');
    
    return 0;
}
