#include <stdio.h>
#include <ctype.h>

#define LEN 64

// n個の要素を持つ文字列配列を表示する
void put_strings(const char s[][LEN], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", s[i]);
    }
}

// 文字列の1文字目のみを大文字にする
void capitalize(char s[]) {
    s[0] = toupper(s[0]);
}

int main(void) {
    char months[12][LEN] = {"january", "february", "march", 
                            "april", "may", "june",
                            "july", "august", "september", 
                            "october", "november", "december"};

    for (int i = 0; i < 12; i++) {
        capitalize(months[i]);
    }

    put_strings(months, 12);

    return 0;
}
