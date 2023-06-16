#include <stdio.h>

int main(void) {
    int prime[5] = {2, 3, 5, 7, 11};

    for (int i = 0; i < 5; i++) {
        printf("%dth prime number is %d\n", i + 1, prime[i]);
    }

    return 0;
}
