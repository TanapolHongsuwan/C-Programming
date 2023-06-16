#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// n個の要素を持つ配列arrayの要素を，最小値min，最大値maxの乱数で
// 初期化する関数
void init_array_random(int array[], int n, int min, int max) {
    srand((unsigned)time(NULL));
    for (int i = 0; i < n; i++) 
        array[i] = rand() % (max - min + 1) + min;
}

// 配列の要素数
#define NUM 30

int main(void) {
    int array[NUM];

    init_array_random(array, NUM, 0, 30);

    for (int i = 0; i < NUM; i++) 
        printf("%3d ", array[i]);
    putchar('\n');

    for (int i = NUM - 1; i > 0; i--)
        for (int j = 0; j < i; j++)
            if (array[j] > array[j + 1]) {
                int t = array[j];
                array[j] = array[j + 1];
                array[j + 1] = t;
            }

    for (int i = 0; i < NUM; i++) 
        printf("%3d ", array[i]);
    putchar('\n');

    return 0;
}
