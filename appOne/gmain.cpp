#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let x, y, r;
    let deg = 0;
    angleMode(DEGREES);
    while (notQuit) {

        //キー操作
        if (isPress(KEY_W)) deg++;
        if (isPress(KEY_S)) deg--;
        if (isTrigger(KEY_D)) deg -= 30;
        if (isTrigger(KEY_A)) deg += 30;
        if (isTrigger(KEY_SPACE)) deg = 0;

        //deg度回転させたときのxとy
        x = cos(deg);
        y = sin(deg);
        
        //クリアして軸を表示
        clear(150);
        mathAxis(1.2);
        
        //斜辺
        strokeWeight(10);
        stroke(150, 200, 255);
        mathLine(0, 0, x, y);
        
        //底辺
        strokeWeight(10);
        stroke(255, 200, 150);
        mathLine(0, 0, x, 0);
       
        //高さ
        strokeWeight(10);
        stroke(255, 150, 255);
        mathLine(x, 0, x, y);

        //半径rを求めて、１かどうかを確認する
        r = sqrt(x * x + y * y);

        //テキスト情報
        textSize(30);

        fill(255, 200, 150);
        text("底辺=cos(" + deg + ")=" + x, 0, 40);

        fill(255, 150, 255);
        text("高さ=sin(" + deg + ")=" + y, 0, 80);

        fill(150, 200, 255);
        text("斜辺(半径)=" + deg + r, 0, 120);

    }
}



/*
void gmain() {
    window(1000, 1000);
    let deg = 0;
    let x, y, r;
    angleMode(DEGREES);
    while (notQuit) {
        //角度degを決定
        if (isTrigger(KEY_SPACE))deg = 0;
        if (isTrigger(KEY_D))deg += 30;
        if (isTrigger(KEY_A))deg -= 30;
        if (isPress(KEY_W))deg += 1;
        if (isPress(KEY_S))deg -= 1;
        //原点から引いた長さ１の線を
        //deg度回転させたときのx、yを求める
        x = cos(deg);
        y = sin(deg);
        //線の長さrを求めて、１かどうか確認する
        r = sqrt(x * x + y * y);

        //クリアして軸を描画
        clear(128);
        mathAxis(1.2, 255);
        //線の太さ
        strokeWeight(10);
        //斜辺（長さ１の線）
        stroke(160, 200, 255);
        mathLine(0, 0, x, y);
        //底辺
        stroke(255, 255, 200);
        mathLine(0, 0, x, 0);
        //高さ
        stroke(255, 200, 200);
        mathLine(x, 0, x, y);

        //テキスト情報
        textSize(40);
        fill(255, 255, 200);
        text( "底辺=cos("   + deg + ")=" + x, 0, 60);
        fill(255, 200, 200);
        text("高さ=sin(" + deg + ")=" + y, 0, 120);
        fill(160, 200, 255);
        text("斜辺(半径)=" + r, 0, 180);
    }
}
*/