#include <stdio.h>

int main(void) {
    int n;

    printf("整数nを入力: "); scanf("%d", &n);

    int i = 0;
    while (i < n) {
        printf("%d ", i);
        i = i + 1;
    }
    printf("\n");

    return 0;
}