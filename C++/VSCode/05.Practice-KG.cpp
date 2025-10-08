#include <stdio.h>
int main()
{
    int kg;
    printf("請輸入你的體重(只取整數小數點忽略)\n");
    scanf("%d", &kg); //
    if (kg > 90)      // 1.大於90
    {
        printf("體重過了喔!\n");
    }
    else // 2.小於90
    {
        printf("不會過重!");
    }
}