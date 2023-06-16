#include <stdio.h>

// 文字列str中で，最初に文字chがある位置を返す．
// str中にchがない場合は-1を返す
int pos(const char str[], int ch) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    char s[64];

    printf("文字列を入力： ");
    scanf("%63s", s);

    for (int i = 0; i < 10; i++) {
        int p = pos(s, '0' + i);
        if (p >= 0)
            printf("%dは%d番目にあります\n", i, p);
        else
            printf("%dはありません\n", i);
    }

    return 0;
}