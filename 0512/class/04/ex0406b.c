#include <stdio.h>

int main(void) {
    int n;

    printf("整数nを入力: "); scanf("%d", &n);

    printf("%dまでの偶数を列挙\n", n);
    int i = 2;
    while (i <= n) {
        printf("%d ", i);
        i += 2;
    }

    return 0;
}

