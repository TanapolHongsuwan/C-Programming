#include <stdio.h>

int main(void) {
    int x, i;

    printf("整数xを入力: "); scanf("%d", &x);

    puts("100以下のxの倍数を列挙");
    for (i = 1; i <= 100; i++) {
        if (i % x)
            continue;
        printf("%d ", i);
    }
    putchar('\n');

    return 0;
}
