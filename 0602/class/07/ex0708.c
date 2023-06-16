#include <stdio.h>
#include <float.h>

int main(void) {
    printf("FLT_MIN: %e\n", FLT_MIN);
    printf("FLT_MAX: %e\n", FLT_MAX);
    printf("FLT_EPSILON: %e\n", FLT_EPSILON);

    float x = 0.0;
    for (int i = 1; i <= 10000; i++) {
        x += 0.0001;
        printf("%e %e\n", x, i / 10000.0);
    }

    if (x == 1.0)
        puts("x は 1 と等しい");
    else
        puts("x は 1 と等しくない");

    return 0;
}
