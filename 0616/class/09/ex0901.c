#include <stdio.h>

int main(void) {
    char str[] = "Hello, World!";

    // 文字列strを表示
    puts(str);

    // 文字列strの4文字目を表示
    putchar(str[4]);
    putchar('\n');

    // 文字列 str の5文字目を . （ピリオド）に変更
    str[5] = '.';
    puts(str);

    // 文字列 str の6文字目を \0 （ナル文字）に変更
    str[6] = '\0';
    puts(str);

    return 0;
}
