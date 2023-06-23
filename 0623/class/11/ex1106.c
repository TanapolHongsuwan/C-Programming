#include <stdio.h>
#include <ctype.h>

// 第1引数の文字列から，
// アルファベットを第2引数の文字列に入れ，
// 数字を第3引数の文字列に入れる
void split_alpha_number(const char *str, char *alpha, char *number) {
    while (*str != '\0') {
        if (isalpha(*str))
            *(alpha++) = *str;
        else if (isdigit(*str))
            *(number++) = *str;
        str++;
    }
    *alpha = '\0';
    *number = '\0';
}

int main(void) {
    char *str = "The 1st student number is 12C1001 in my class";
    char str_a[100];
    char str_n[100];

    split_alpha_number(str, str_a, str_n);
    printf("str:    %s\n", str);
    printf("alpha:  %s\n", str_a);
    printf("number: %s\n", str_n);

    return 0;
}
