#include <stdio.h>
#include <math.h>

int main(void) {
    double x, y;

    printf("実数xを入力: "); scanf("%lf", &x);
    printf("実数yを入力: "); scanf("%lf", &y);

    printf("sqrt(%f) = %f\n", x, sqrt(x)); // x の正の平方根
    printf("pow(%f, %f) = %f\n", x, y, pow(x, y)); // x の y 乗
    
    printf("exp(%f) = %f\n", x, exp(x)); // e の x 乗
    printf("log(%f) = %f\n", x, log(x)); // x の自然対数

    printf("sin(%f) = %f\n", x, sin(x)); // x（ラジアン） の正弦
    printf("cos(%f) = %f\n", x, cos(x)); // x（ラジアン） の余弦
    printf("tan(%f) = %f\n", x, tan(x)); // x（ラジアン）の正接

    return 0;
}
