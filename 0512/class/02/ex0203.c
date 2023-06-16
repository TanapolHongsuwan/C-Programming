#include <stdio.h>

int main(void) {
    double d;

    printf("実数を入力してください: ");
    scanf("%lf", &d);

    printf("%fの2倍は%fです\n", d, 2 * d);

    return 0;
}
