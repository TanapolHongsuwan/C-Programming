#include <stdio.h>

int main(void) {
    // 6人分の3科目の点数
    int score[][3] = {{80, 70, 60}, {90, 80, 80}, {70, 60, 80},
                      {90, 80, 90}, {80, 70, 90}, {60, 80, 70}, };
    int sum_p[6] = {0}; // 人ごとの合計点
    int sum_t[3] = {0}; // 科目ごとの合計点

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            sum_p[i] += score[i][j];
            sum_t[j] += score[i][j];
        }
    }

    puts("人ごとの合計点");
    for (int i = 0; i < 6; i++)
        printf("[%d] %3d\n", i, sum_p[i]);
    
    puts("科目ごとの合計点");
    for (int i = 0; i < 3; i++)
        printf("[%d] %3d\n", i, sum_t[i]);

    return 0;
}