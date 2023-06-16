#include <stdio.h>

// nがmの約数である場合は1，そうでない場合は0を返す関数
int check_div(int n, int m) {
    return m % n == 0;
}

int main(void) {
    int x, y;

    printf("整数xを入力: "); scanf("%d", &x);
    printf("整数yを入力: "); scanf("%d", &y);

    printf("xはyの約数%s\n", check_div(x, y) ? "です" : "ではありません");

    return 0;
}
