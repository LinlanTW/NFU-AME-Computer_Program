// 題目預設
// 每4年一次閏年
// 但每100年不閏
// 但每400年又閏
#include <stdio.h>
int main()
{
    int year; // 假設cc是斜邊
    printf("請輸入西洋年判斷閏年或平年\n");
    scanf("%d", &year);
    if (year % 4 == 0) // 1 巢狀判斷 判斷Year/4餘數等不等於0 如果全等於0進入巢狀判斷 如果不等於0直接else
    {
        if (year % 100 != 0) // 1-1 進入巢狀判斷 如果Year/100 餘數不等於0 則為閏年
        {
            printf("所輸入的西洋年:%d是閏年\n", year);
        }
        else if (year % 100 == 0 && year % 400 == 0) // 1-2 進入巢狀判斷 如果Year/100 餘數全等於0 且 Year/400也全等於0 則為閏年
        {
            printf("所輸入的西洋年:%d是閏年\n", year);
        }
        else
        {
            printf("所輸入的西洋年:%d不是閏年\n", year);
        }
    }
    else // 2
    {
        printf("所輸入的西洋年:%d不是閏年\n", year);
    }
}