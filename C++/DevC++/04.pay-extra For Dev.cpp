#include <stdio.h>
int main()
{
    int buy;
    float pay; // 浮點函數 可以出現小數點
    printf("請輸入購物金額，一萬元以上，僅針對萬元以上打95折\n");
    scanf("%d", &buy); //
    if (buy > 10000)   // 1.大於10000
    {
        pay = (buy - 10000) * 0.95 + 10000; // 理解 付的錢=(購買的金錢-10000)*95折在加10000回去
        printf("買了%d元，付了%f元\n", buy, pay);
    }
    else // 2.小於等於10000
    {
        pay = buy * 1.0;
        printf("買了%d元,付了%f元\n", buy, pay);
    }
}