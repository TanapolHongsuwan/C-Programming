#include <stdio.h>
#include <ctype.h>

void extract_number(const char str[], char num_str[]) {


}

int main(void) {
    char str[64];
    char num_str[64];

    printf("文字列を入力： ");
    scanf("%63s", str);

    extract_number(str, num_str);

    printf("入力された文字列は%sです\n", str);
    printf("抽出された数字は%sです\n", num_str);

    return 0;
}


