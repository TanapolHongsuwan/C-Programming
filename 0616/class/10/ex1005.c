#include <stdio.h>

void show_array_info(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d] = %d, ", i, a[i]);
        printf("*(a+%d) = %d, ", i, *(a + i));
        printf("(a+%d) = %p\n", i, (a + i));
    }
}

int main(void) {
    int x[6] = {1, 2, 3, 4, 5, 6};
    int *p = x;

    printf("x = %p, p = %p\n", x, p);
    for (int i = 0; i < 6; i++) {
        printf("x[%d] = %d, ", i, x[i]);
        printf("p[%d] = %d, ", i, p[i]);
        printf("&x[%d] = %p, ", i, &x[i]);
        printf("(p+%d) = %p\n", i, (p + i));
    }

    show_array_info(x, 6);

    return 0;
}
