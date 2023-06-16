#include <stdio.h>

int main(void) {
    int s;

    printf("整数sを入力: "); scanf("%d", &s);

    switch (s) {
        case 0:
            puts("sは0です");
        case 1:
        case 2:
            puts("sは0か1か2です");
            break;
        default:
            puts("sはその他の数です");
            break;
    }

    return 0;
}
