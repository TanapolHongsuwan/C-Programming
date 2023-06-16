#include <stdio.h>

int main(void ){
    int ch;

    for (ch = 0x20; ch <= 0x7F; ch++) {
        printf("0x%x ", ch);
        putchar('"');
        putchar(ch);
        putchar('"');
        putchar('\n');
    }

    return 0;
}

