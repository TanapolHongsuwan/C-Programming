#include <stdio.h>

int main(void) {
    int x = 0x1A;

    printf("DEC:   %d\n", x);
    printf("OCT:  0%o\n", x);
    printf("HEX: 0x%x\n", x);

    return 0;
}