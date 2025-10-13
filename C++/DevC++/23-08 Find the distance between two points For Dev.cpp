#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2, d;
    printf("請輸入兩點座標求他們的距離，一點一點輸入\n");
    scanf("%f %f", &x1, &y1);
    printf("第一點座標%f,,%f\n", x1, y1);
    scanf("%f %f", &x2, &y2);
    printf("第二點座標%f,,%f\n", x2, y2);
    d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    printf("兩點之間的距離為%f", d);
}