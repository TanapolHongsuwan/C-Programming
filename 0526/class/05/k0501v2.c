#include <stdio.h>

#define NUM 300

int main(void) {
    double heights[NUM];
    for (int i = 0; i < NUM; i++) {
        scanf("%lf", &heights[i]);
    }

    for (int j = 0; j < NUM; j++) {
        for (int i = 0; i < NUM - 1; i++) {
            if (heights[i] > heights[i + 1]) {
                double tmp = heights[i];
                heights[i] = heights[i + 1];
                heights[i + 1] = tmp;
            }
        }
    }

    double min = heights[0];
    double max = heights[NUM - 1];
    
    double sum = 0.0;
    for (int i = 0; i < NUM; i++) {
        sum += heights[i];
    }
    double average = sum / NUM;

    printf("Min = %.3lf, Max = %.3lf, Average = %.3lf\n", min, max, average);

    return 0;
}
