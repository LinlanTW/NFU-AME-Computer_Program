// 3.勇伯24h購物平台購物。
// 步驟一、請選擇你所購買的物品:1 電腦;2 手機;3 耳機;
// 輸入	您所購買的物品	物品價格
// 1	電腦	50000元
// 2	手機	30000元
// 3	耳機	3000元
// 步驟二、在選擇支付方式: 4貨到付款;5信用卡線上支付;
// 最後顯示結果。
// 輸入	付款方式	折扣價格
// 4	貨到付款	總金額打85折
// 5	線上支付	總金額加60元
#include <stdio.h>
int main()
{
    int item, how_pay, pay, paid_tmp01;
    printf("勇伯24h購物平台購物\n");
    printf("請選擇你所購買的物品:1 電腦;2 手機;3 耳機;?\n你購買的物品: ");
    scanf("%d", &item);
    printf("選擇支付方式: 4 貨到付款;5 信用卡線上付款;?\n你的支付方式: ");
    scanf("%d", &how_pay);
    if (item == 1) // a>b>c or a>c>b
    {
        printf("購買電腦，");
        paid_tmp01 = 50000;
    }
    else if (item == 2) // b>a>c or b>c>a
    {
        printf("購買手機，");
        paid_tmp01 = 30000;
    }
    else if (item == 3) // c>a>b or c>b>a
    {
        printf("購買耳機，");
        paid_tmp01 = 3000;
    }
    else
    {
        printf("我們沒有你輸入的物品代號。\n");
        return 0;
    }
    if (how_pay == 4)
    {
        pay = paid_tmp01 * 0.85;
        printf("貨到付款，%d*0.85=%d，總金額%d元。", paid_tmp01, pay, pay);
    }
    else if (how_pay == 5)
    {
        pay = paid_tmp01 + 60;
        printf("線上支付，%d+60=%d，總金額%d元。", paid_tmp01, pay, pay);
    }
    else
    {
        printf("但我們沒有你輸入的付款方式。\n");
        return 0;
    }
}