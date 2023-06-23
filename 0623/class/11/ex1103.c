#include <stdio.h>

#define LEN 10

int main(void) {
    // 配列による文字列の配列 -> 2次元配列
    char str_list[][LEN] = {"black", "red", "blue"};
    // ポインタによる文字列の配列 -> ポインタの配列
    char *strp_list[] = {"line", "rectangle", "circle"};

    for (int i = 0; i < 3; i++)
        printf("str_list[%d] = %s\n", i, str_list[i]);
    
    for (int i = 0; i < 3; i++)
        printf("strp_list[%d] = %s\n", i, strp_list[i]);
    
    str_list[1][0] = 'R';
    printf("str_list[1] = %s\n", str_list[1]);

    // （実行時エラー）
    // strp_list[1][0] = 'R';
    // printf("strp_list[1] = %s\n", strp_list[1]);

    return 0;
}
