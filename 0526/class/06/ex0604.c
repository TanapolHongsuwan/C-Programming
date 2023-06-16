#include <stdio.h>

int x_global;
void func1(void);

int main(void) {
    int x = 1;

    puts("1回目");
    func1();

    x = 10;
    x_global = 10;

    puts("2回目");
    func1();

    return 0;
}

void func1(void) {
    int x = 100;
    printf("%d\n", x);
    printf("%d\n", x_global);
}
