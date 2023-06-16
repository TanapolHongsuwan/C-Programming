#include <stdio.h>

int main(void) {
    int n, i = 1, k = 1;

    printf("整数nを入力: "); scanf("%d", &n);

    while (i <= n) {
        k *= 2;
        printf("2^%d = %d\n", i, k);
        i++;
    }

    return 0;
}