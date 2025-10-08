#include <stdio.h>
int main()
{
    float x, y;
    printf("請輸入座標點，判斷象限及原點 x,y\n"); // 2-4春,5-7夏8-10秋,11-1冬
    scanf("%f %f", &x, &y);                       //%f記錄浮點數 即有小數點的值
    // 判斷式
    if (x > 0 && y > 0) // 第一象限
    {
        printf("你所輸入的座標為X:%f,Y:%f為第一象限\n", x, y);
    }
    else if (x < 0 && y > 0) // 第二象限
    {
        printf("你所輸入的座標為X:%f,Y:%f為第二象限\n", x, y);
    }
    else if (x < 0 && y < 0) // 第三象限
    {
        printf("你所輸入的座標為X:%f,Y:%f為第三象限\n", x, y);
    }
    else if ((x > 0 && y < 0)) // 第四象限
    {
        printf("你所輸入的座標為X:%f,Y:%f為第四象限\n", x, y);
    }
    else if ((x == 0 && y == 0)) // 原點
    {
        printf("你所輸入的座標為X:%f,Y:%f為原點\n", x, y);
    }
}