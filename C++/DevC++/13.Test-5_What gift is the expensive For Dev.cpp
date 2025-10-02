// 2.	阿盛要買禮物，他準備了Q元挑選了三種禮物，價格分別是A、B、C元。
// 請利用if、else if、else算出哪一個禮物最貴，將全部的錢拿來買最貴的禮物，
// 並顯示最後剩多少錢。(Q、A、B、C皆由教師指定) 30%
#include <stdio.h>
int main()
{
    int q, a, b, c, buy, pay_d;
    printf("準備了多少錢?\n");
    scanf("%d", &q);
    printf("A禮物的價格?\n");
    scanf("%d", &a);
    printf("B禮物的價格?\n");
    scanf("%d", &b);
    printf("C禮物的價格?\n");
    scanf("%d", &c);
    if (a > b && b > c || a > c && c > b) // a>b>c or a>c>b
    {
        buy = q / a;
        pay_d = q % a;
        printf("A最貴，%d/%d=%d，剩%d元。", q, a, buy, pay_d);
    }
    else if (b > a && a > c || b > c && c > a) // b>a>c or b>c>a
    {
        buy = q / b;
        pay_d = q % b;
        printf("B最貴，%d/%d=%d，剩%d元。", q, b, buy, pay_d);
    }
    else if (c > a && a > b || c > b && b > a) // c>a>b or c>b>a
    {
        buy = q / c;
        pay_d = q % c;
        printf("C最貴，%d/%d=%d，剩%d元。", q, c, buy, pay_d);
    }
}