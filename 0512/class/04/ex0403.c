#include <stdio.h>

int main(void) {
    int n;

    printf("整数nを入力: "); scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

