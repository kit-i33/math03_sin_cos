#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let x, y, r;
    let deg = 0;
    angleMode(DEGREES);
    while (notQuit) {

        //�L�[����
        if (isPress(KEY_W)) deg++;
        if (isPress(KEY_S)) deg--;
        if (isTrigger(KEY_D)) deg -= 30;
        if (isTrigger(KEY_A)) deg += 30;
        if (isTrigger(KEY_SPACE)) deg = 0;

        //deg�x��]�������Ƃ���x��y
        x = cos(deg);
        y = sin(deg);
        
        //�N���A���Ď���\��
        clear(150);
        mathAxis(1.2);
        
        //�Ε�
        strokeWeight(10);
        stroke(150, 200, 255);
        mathLine(0, 0, x, y);
        
        //���
        strokeWeight(10);
        stroke(255, 200, 150);
        mathLine(0, 0, x, 0);
       
        //����
        strokeWeight(10);
        stroke(255, 150, 255);
        mathLine(x, 0, x, y);

        //���ar�����߂āA�P���ǂ������m�F����
        r = sqrt(x * x + y * y);

        //�e�L�X�g���
        textSize(30);

        fill(255, 200, 150);
        text("���=cos(" + deg + ")=" + x, 0, 40);

        fill(255, 150, 255);
        text("����=sin(" + deg + ")=" + y, 0, 80);

        fill(150, 200, 255);
        text("�Ε�(���a)=" + deg + r, 0, 120);

    }
}



/*
void gmain() {
    window(1000, 1000);
    let deg = 0;
    let x, y, r;
    angleMode(DEGREES);
    while (notQuit) {
        //�p�xdeg������
        if (isTrigger(KEY_SPACE))deg = 0;
        if (isTrigger(KEY_D))deg += 30;
        if (isTrigger(KEY_A))deg -= 30;
        if (isPress(KEY_W))deg += 1;
        if (isPress(KEY_S))deg -= 1;
        //���_��������������P�̐���
        //deg�x��]�������Ƃ���x�Ay�����߂�
        x = cos(deg);
        y = sin(deg);
        //���̒���r�����߂āA�P���ǂ����m�F����
        r = sqrt(x * x + y * y);

        //�N���A���Ď���`��
        clear(128);
        mathAxis(1.2, 255);
        //���̑���
        strokeWeight(10);
        //�ΕӁi�����P�̐��j
        stroke(160, 200, 255);
        mathLine(0, 0, x, y);
        //���
        stroke(255, 255, 200);
        mathLine(0, 0, x, 0);
        //����
        stroke(255, 200, 200);
        mathLine(x, 0, x, y);

        //�e�L�X�g���
        textSize(40);
        fill(255, 255, 200);
        text( "���=cos("   + deg + ")=" + x, 0, 60);
        fill(255, 200, 200);
        text("����=sin(" + deg + ")=" + y, 0, 120);
        fill(160, 200, 255);
        text("�Ε�(���a)=" + r, 0, 180);
    }
}
*/