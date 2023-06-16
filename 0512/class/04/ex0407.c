#include <stdio.h>

int main(void) {
    int n;

    printf("整数nを入力: "); scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++)
            printf("*");
        putchar('\n');
    }

    return 0;
}

