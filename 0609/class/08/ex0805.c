#include <stdio.h>

// 方向キーを表す列挙体
enum direction { DR_FORWARD, DR_BACKWARD, DR_RIGHT, DR_LEFT };

// 方向を表示する関数
void print_direction(enum direction);

// 時計回りに90度回転した方向を返す関数
enum direction rotate_clockwise(enum direction);

int main(void) {
    enum direction dir1 = DR_FORWARD, dir2;

    for (int i = 0; i < 4; i++) {
        dir2 = rotate_clockwise(dir1);
        print_direction(dir1); printf(" --> ");
        print_direction(dir2); putchar('\n');
        dir1 = dir2;
    }

    return 0;
}

void print_direction(enum direction dir) {
    switch (dir) {
        case DR_FORWARD: printf("前"); break;
        case DR_BACKWARD: printf("後"); break;
        case DR_RIGHT: printf("右"); break;
        case DR_LEFT: printf("左"); break;
    }
}

enum direction rotate_clockwise(enum direction d) {
    switch (d) {
        case DR_FORWARD: d = DR_RIGHT; break;
        case DR_RIGHT: d = DR_BACKWARD; break;
        case DR_BACKWARD: d = DR_LEFT; break;
        case DR_LEFT: d = DR_FORWARD; break;
    }
    return d;
}
