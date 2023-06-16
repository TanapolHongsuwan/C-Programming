#include <stdio.h>

int main(void) {
    int month;

    do {
        printf("1から12までの数字を入力: ");
        scanf("%d", &month);
    } while (month < 1 || month > 12);

    printf ("入力された数字は%dです\n", month);

    return 0;
}

