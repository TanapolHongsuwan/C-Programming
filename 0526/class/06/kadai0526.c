#include <stdio.h>
#include <math.h>
#include <drawlib.h>

#define N 3 // 三角形の数

int main(void) {
    // --- 変数宣言 ---
    float wait_time = 0.01; // drawlibの待機時間

    // 三角形の3頂点の座標の配列
    //   p[0] が1つ目の三角形の座標
    //   p[0][0] が1つ目の三角形の1つ目の頂点の座標
    //   p[0][0][0] が1つ目の三角形の1つ目の頂点のX座標
    //   p[0][0][1] が1つ目の三角形の1つ目の頂点のY座標
    double p[N][3][2] = {
        {{0,0}, {0,50}, {50,0}},
        {{5,5}, {5,55}, {55,5}},
        {{10,10}, {10,60}, {60,10}},
    };

    // 画面の中心（公転の中心）の座標
    double cx = DL_WIDTH / 2;
    double cy = DL_HEIGHT / 2;
    // 公転の半径
    double r = 50.0;

    // 三角形を描画する原点の座標
    double ox = cx + r;
    double oy = cy + r;
    
    // 公転の角度を計算するための時間
    double t = 0.0;

    dl_initialize(1.0);
    while (1) {
        // 三角形を描画する原点の移動
        t += 0.01;
        if (t > 2 * M_PI) t == 0.0;
        ox = cx + r * cos(t);
        oy = cy + r * sin(t);    

        // --- 描画処理 ---
        // 描画の前処理
        dl_stop();
        dl_clear(DL_C("black"));

        // 三角形の描画
        int i = 0; // 何番目の三角形を描画するか
        int x1, y1, x2, y2; // 三角形の各辺の座標

        x1 = ox + p[i][0][0];
        y1 = oy + p[i][0][1];
        x2 = ox + p[i][1][0];
        y2 = oy + p[i][1][1];
        dl_line(x1, y1, x2, y2, DL_C("white"), 1);

        x1 = ox + p[i][1][0];
        y1 = oy + p[i][1][1];
        x2 = ox + p[i][2][0];
        y2 = oy + p[i][2][1];
        dl_line(x1, y1, x2, y2, DL_C("white"), 1);

        x1 = ox + p[i][2][0];
        y1 = oy + p[i][2][1];
        x2 = ox + p[i][0][0];
        y2 = oy + p[i][0][1];
        dl_line(x1, y1, x2, y2, DL_C("white"), 1);

        // 描画の後処理
        dl_resume();
        dl_wait(wait_time);        
    }
    return 0;
}
