#include <stdio.h>

int main(void) {
    unsigned int x = 3; // 2進数で 0011
    unsigned int y = 5; // 2進数で 0101
    unsigned int x_and_y = x & y; // 2進数で 0001

    if (x_and_y == 1)
        puts("x_and_y は 1 ");
    else
        puts("x_and_y は 1 以外");
    
    if (x & y == 1)
        puts("x & y は 1 ");
    else
        puts("x & y は 1 以外");

    return 0;
}
