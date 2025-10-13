#include <stdio.h>
int main()
{
    int month;
    printf("請輸入月份判斷季節\n"); // 2-4春,5-7夏8-10秋,11-1冬
    scanf("%d", &month);
    // 管制關卡
    if (month < 1 || month > 12)
    {
        printf("所輸入的月份:%d有誤，請輸入1~12\n", month);
        return 0; // 結束程式
    }
    // 判斷式
    if (month >= 2 && month <= 4) // 2-4
    {
        printf("所輸入的月份:%d為春天\n", month);
    }
    else if (month >= 5 && month <= 7) // 5-7
    {
        printf("所輸入的月份:%d為夏天\n", month);
    }
    else if (month >= 8 && month <= 10) // 8-10
    {
        printf("所輸入的月份:%d為秋天\n", month);
    }
    else if ((month >= 11 && month <= 12) || month == 1) // 11-12 1 特別注意 ||(或者) 是不在()內判別式的特別額外
    {
        printf("所輸入的月份:%d為冬天\n", month);
    }
}