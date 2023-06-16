#include <stdio.h>

int main(void) {
    int s;

    printf("整数sを入力: "); scanf("%d", &s);

    switch (s) {
        case 0:
            puts("sは0です");
            break;
        case 1:
            puts("sは1です");
            break;
        case 2:
            puts("sは2です");
            break;
        default:
            puts("sはその他の数です");
            break;
    }

    return 0;
}

