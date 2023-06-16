include <stdio.h>

int main(void) {
    int n;

    printf("整数nを入力: "); scanf("%d", &n);

    for (int i = 1, k = 1; i <= n; i++) {
        k *= 2;
        printf("2^%d = %d\n", i, k);
    }

    return 0;
}

