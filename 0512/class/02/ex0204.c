#include <stdio.h>

int main(void) {
    int n1 = 10, n2 = 20;
    double d1 = 10.0, d2 = 20.0;

    printf("1: %d / %d = %d\n", n1, n2, n1 / n2);
    printf("2: %f / %f = %f\n", d1, d2, d1 / d2);
    printf("3: %d / %f = %f\n", n1, d2, n1 / d2);
    printf("4: %d / %d = %f\n", n1, n2, (double)n1 / n2);

    return 0;
}

