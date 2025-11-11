// 漢堡軟糖 10元 無優惠
// 牛奶糖 5元 買5送1
// 金平糖 2元 買10送2
#include <stdio.h>
int main()
{
    int candy, math, need_money;
    printf("請輸入糖果種類 1.漢堡軟糖10元;2.牛奶糖5元;3.金平糖2元。\n");
    scanf("%d", &candy);
    printf("請輸入購買數量。\n");
    scanf("%d", &math);
    if (candy == 1)
    {
        need_money = math * 10;
    }
    else if (candy == 2)
    {
        need_money = math * 5;
    }
    else if (candy == 3)
    {
        need_money = math * 2;
    }
    if (candy == 1)
    {
        printf("總金額為%d元，", need_money);
        printf("漢堡軟糖總共有%d顆。\n", math);
    }
    else if (candy == 2)
    {
        printf("總金額為%d元，", need_money);
        printf("牛奶糖總共有%d顆。\n", math + (math / 5) * 1);
    }
    else if (candy == 3)
    {
        printf("總金額為%d元，", need_money);
        printf("金平糖總共有%d顆。\n", math + (math / 10) * 2);
    }
}