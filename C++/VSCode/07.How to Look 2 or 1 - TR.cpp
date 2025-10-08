#include <stdio.h>
int main()
{
    int num;
    printf("請任意讀入一整數判斷奇數與偶數\n");
    scanf("%d", &num); //
    if (num % 2 == 0)  // 1.得到得值/2 %代表除以 如果餘數為零判斷為偶數 並不影響正負數
    {
        printf("所輸入的數:%d 為偶數!\n", num);
    }
    else // 2.奇數
    {
        printf("所輸入的數:%d 為奇數!\n", num);
    }
}