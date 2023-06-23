#include <stdio.h>

void str_copy(char *dst, const char *src) {
    // この関数の中身を書いてください
    *dst = '\0';
}

void scan_string(char str[], int n) {
    for (int i = 0; i < n - 1; i++) {
        str[i] = getchar();
        if (str[i] == '\n') {
            str[i] = '\0';
            return;
        }
    }
    str[n - 1] = '\0';
    return;
}

int main(void) {
    char str1[65], str2[65];

    printf("文字列1を入力(64文字以下): ");
    scan_string(str1, 65);

    str_copy(str2, str1);

    printf("文字列1: %s\n", str1);
    printf("文字列1: %s\n", str2);
}