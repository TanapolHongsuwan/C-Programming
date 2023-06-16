#include <stdio.h>

#define NUM 300

int main(void) {
    double heights[NUM];

    // NUM個データを読み込む
    for (int i = 0; i < NUM; i++) {
        scanf("%lf", &heights[i]);
    }

    // NUM個のデータを表示する
    //for (int i = 0; i < NUM; i++) {
    //    printf("%d番目の身長: %f\n", i + 1, heights[i]);
    //}

    // maxが最大値，minが最小値，averageが平均値
    double max, min, average;
    
    // 確認6-1. それぞれを求めて表示する
    max = 0.0;
    min = 200;
    average = 0.0;

    for (int i = 0; i < NUM; i++) {
        if (heights[i] > max) {
            max = heights[i];
        }
        if (heights[i < min]) {
            min = heights[i];
        }
        average += heights[i];
    }
    average /= NUM;

    printf("max = %.3lf, min = %.3lf, average = %.3lf\n", min, max, average);

    // 確認6-1【発展】. ヒストグラムを描く
    //   (1) 9個の整数の要素を持つ配列histを用意して，
    //       全て0で初期化する
    //   (2) heightsを走査しながら，条件に応じて
    //       hist[0]～hist[8]の値を1ずつ増やす．
    //       130以上, 135未満だったらhist[0]を1増やす
    //       135以上, 140未満だったらhist[1]を1増やす
    //       ...
    //   (3) histを走査しながらヒストグラムを書く
    //       (3)-1. hist[i]に対応する値の最小値を表示する．
    //             （例: hist[i]であれば130）
    //       (3)-2. hist[i]の値を表示する
    //       (3)-3. hist[i]の値に応じて，*を表示する．
        
    return 0;
}