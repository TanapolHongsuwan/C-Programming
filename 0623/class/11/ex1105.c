#include <stdio.h>
#include <string.h>

int main(void) {
    char s2[] = "Hello, World";
    char s1[100];

    // strlen関数は，文字列の長さを求める
    printf("strlen(s2) = %zu\n", strlen(s2));

    // strcpy関数は，第1引数の文字列へ，第2引数の文字列をコピーする
    strcpy(s1, s2);
    printf("s1: %s\n", s1);

    // strncpy関数は，第1引数の文字列へ，第2引数の文字列を，第3引数の長さだけコピーする
    strncpy(s1, s2, 5);
    s1[5] = '\0'; 
    printf("s1: %s\n", s1);

    // strcat関数は，第1引数の文字列の末尾に，第2引数の文字列を連結する
    strcat(s1, s2);
    printf("s1: %s\n", s1);

    char *str1 = "apple";
    char *str2 = "appreciate";

    // strcmp関数は，第1引数(str1)の文字列と第2引数(str2)の文字列を比較する
    // str1 が str2 より小さい（辞書順で手前）の場合，負の値
    // str1 と str2 が等しい場合，0
    // str1 が str2 より大きい（辞書順で後ろ）の場合，正の値
    printf("strcmp(str1, str2) = %d\n", strcmp(str1, str2));

    // strncmp関数は，第1引数(str1)の文字列と第2引数(str2)の文字列を，第3引数の長さだけ比較する
    printf("strncmp(str1, str2, 3) = %d\n", strncmp(str1, str2, 3));

    return 0;    
}

