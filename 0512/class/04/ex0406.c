#include <stdio.h>

int main(void) {
    int n;

    printf("整数nを入力: "); scanf("%d", &n);

    printf("%dまでの偶数を列挙\n", n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) 
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}

