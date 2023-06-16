#include <stdio.h>
#include <ctype.h>

// 文字列sの長さを返す
int str_len(const char s[]) {
    int n = 0;
    while (s[n] != '\0') {
        n++;
    }
    return n;
}

// 文字列sに含まれる文字を大文字に変換する
void str_upper(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = toupper(s[i]);
    }
}

// 文字列sに含まれる文字を小文字に変換する
void str_lower(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }
}

// 文字列sを反転する
void str_reverse(char s[]) {
    int len = str_len(s);
    for (int i = 0; i < len / 2; i++) {
        char tmp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = tmp;
    }
}

int main(void) {
    char str[64];

    while (1) {
        printf("文字列を入力（ctrl+Dで終了）: ");
        int r = scanf("%63s", str);

        if (r == EOF) 
            break;

        printf("文字列の長さ: %d\n", str_len(str));
        str_reverse(str);
        printf("文字列を反転: %s\n", str);
        str_upper(str);
        printf("大文字に変換: %s\n", str);
        str_lower(str);
        printf("小文字に変換: %s\n", str);
    }

    return 0;
}
