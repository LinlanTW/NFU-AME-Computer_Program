#include <stdio.h>
int main()
{
    int lb;
    float x;
    printf("請輸入數字求高斯函數\n"); // 不大於x的最大整數
    scanf("%f", &x);
    lb = x; // 浮點數丟給整數變瘦了，數字位數變少了
    if (x >= 0)
    {
        printf("輸入數字：%f，其高斯函數：%d\n", x, lb);
    }
    else if (x < 0)
    {
        if (lb == x)
        {
            printf("輸入數字：%f，其高斯函數：%d\n", x, lb);
        }
        else if (lb > x)
        {
            printf("輸入數字：%f，其高斯函數：%d\n", x, lb - 1);
        }
    }
}
