// ex0905.c の関数を，ポインタによる走査で実現する
#include <stdio.h>
#include <ctype.h>

// 文字列sの長さを返す
int str_len(const char *s) {
    int n = 0;
    while (*s++ != '\0')
        n++;
    return n;
}

// 文字列sに含まれる文字を大文字に変換する
void str_upper(char *s) {
    while (*s != '\0') {
        *s = toupper(*s);
        s++;
    }

    // 別の書き方(1)
    // for (; *s != '\0'; s++)
    //     *s = toupper(*s);

    // 別の書き方(2)
    // do {
    //     *s = toupper(*s);        
    // } while (*(++s) != '\0');
}

// 文字列sに含まれる文字を小文字に変換する
void str_lower(char *s) {
    while (*s != '\0') {
        *s = tolower(*s);
        s++;
    }
}

int main(void) {
    char str[64];

    while (1 ){
        printf("文字列を入力（Ctrl+Dで終了）: ");
        int r = scanf("%s", str);
        
        if (r == EOF)
            break;

        printf("文字列の長さ: %d\n", str_len(str));
        str_upper(str);
        printf("大文字に変換: %s\n", str);
        str_lower(str);
        printf("小文字に変換: %s\n", str);
    }
}
