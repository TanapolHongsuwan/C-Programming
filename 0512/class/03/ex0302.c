#include <stdio.h>

int main(void) {
    int x;

    printf("整数xを入力: ");
    scanf("%d", &x);

    if (x > 200)
        puts("xは200より大きい");
    else if (x < 100)
        puts("xは100より小さい");
    else
        puts("xは100〜200の間の数");
    
    return 0;
}
