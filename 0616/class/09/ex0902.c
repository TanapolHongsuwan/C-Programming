#include <stdio.h>

int main(void) {
    char str[11];

    printf("文字列を入力: ");
    scanf("%10s", str);

    puts(str);

    for (int i = 0; i < 11; i++) {
        printf("%2d: %c (%d)\n", i, str[i], str[i]);
    }

    return 0;
}

