#include <stdio.h>

#define NUM 10

int main(void) {
    char str_list[NUM][64];
    int n;

    printf("%d個の文字列を入力（'x'）で中断\n", NUM);
    for (int i = 0; i < NUM; i++) {
        printf("文字列入力（%d番目）：", i);
        scanf("%63s", str_list[i]);
        if (str_list[i][0] == 'x' && str_list[i][1] == '\0') {
            n = i;
            break;
        }
    }

for (int i = 0; i < n; i++) {
    printf("%s\n", str_list[i]);
}

    return 0;
}
