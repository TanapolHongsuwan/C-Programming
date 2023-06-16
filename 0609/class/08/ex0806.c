#include <stdio.h>

//  nの階乗を求める関数
int fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main(void) {
    int n;

    printf("整数nを入力: "); scanf("%d", &n);
    
    printf("nの階乗は%dです\n", fact(n));

    return 0;
}


