#include <stdio.h>
int main()
{
    int hr;
    float coin;
    printf("請輸入你上班的時間(小時取整數)\n"); // 90-100A,60-69D
    scanf("%d", &hr);                           //%f記錄浮點數 即有小數點的值
    // 判斷式
    if (hr <= 60) // 小於60小時直接乘以75
    {
        coin = hr * 75;
        printf("上班時間:%d小時，賺了%f元\n", hr, coin);
    }
    else if (hr >= 61 && hr <= 75) // 超過60個小時的時間*1.25倍
    {
        coin = 60 * 75 + (hr - 60) * 75 * 1.25;
        printf("上班時間:%d小時，賺了%f元\n", hr, coin);
    }
    else if (hr >= 76) // 超過60個小時的時間*1.25倍 但已知超過75小時則75-60=15 超過75個小時的時間*1.75倍
    {
        coin = (60 * 75) + (15 * 75 * 1.25) + ((hr - 75) * 75 * 1.75);
        printf("上班時間:%d小時，賺了%f元\n", hr, coin);
    }
}