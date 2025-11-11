#include <stdio.h>
int main()
{
    float length = 3000; // 3000公尺
    int day = 0;         // 天數
    while (length >= 5)  // 大於等於5公尺持續執行
    {
        length = length / 2; // 每天長度減半
        day = day + 1;       // 天數加1
    }
    printf("3000公尺繩子每一天減去一半需花%d天長度短於5公尺\n", day);
}