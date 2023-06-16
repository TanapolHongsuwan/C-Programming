#include <stdio.h>

int main(void) {
    int ch;
    int n = 0;

    while (1) {
        ch = getchar();
        if (ch == EOF)
            break;
        if (ch == '\n')
            n++;
    }

    // 以下でも同じ
    // while ((ch = getchar()) != EOF)
    //     if (ch == '\n')
    //         n++;

    printf("aが入力された回数: %d回\n", n);

    return 0;
}
