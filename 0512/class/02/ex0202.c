#include <stdio.h>

int main(void) {
    int n1, n2;

    puts("2つの整数を入力してください");
    printf("n1: "); scanf("%d", &n1);
    printf("n2: "); scanf("%d", &n2);

    printf("%dは%dの約%d%%です．\n", n1, n2, 100 * n1 / n2);

    int avg = (n1 + n2) / 2;

    printf("%dと%dの平均は約%dです．\n", n1, n2, avg);

    return 0;
}
