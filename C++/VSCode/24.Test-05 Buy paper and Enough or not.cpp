// 0-5本書 每本須50張紙
// 6-10本書 每本須40張紙
// 11本以上 每本須30張紙
#include <stdio.h>
int main()
{
    int add_P, add_math, need_P;
    printf("請輸入訂購的紙張數量(張):");
    scanf("%d", &add_P);
    printf("請輸入影印書本數量(本):");
    scanf("%d", &add_math);
    if (add_math <= 5)
    {
        need_P = add_math * 50;
        if (need_P <= add_P)
        {
            printf("\n紙張數量足夠，剩餘%d張紙。\n", add_P - need_P);
        }
        else
        {
            printf("\n紙張數量不足，還需要臨時加購%d張紙。\n", need_P - add_P);
        }
    }
    else if (add_math <= 10)
    {
        need_P = add_math * 40;
        if (need_P <= add_P)
        {
            printf("\n紙張數量足夠，剩餘%d張紙。\n", add_P - need_P);
        }
        else
        {
            printf("\n紙張數量不足，還需要臨時加購%d張紙。\n", need_P - add_P);
        }
    }
    else if (add_math > 10)
    {
        need_P = add_math * 30;
        if (need_P <= add_P)
        {
            printf("\n紙張數量足夠，剩餘%d張紙。\n", add_P - need_P);
        }
        else
        {
            printf("\n紙張數量不足，還需要臨時加購%d張紙。\n", need_P - add_P);
        }
    }
}