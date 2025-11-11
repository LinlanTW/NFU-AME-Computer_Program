#include <stdio.h>
int main()
{
    int pp, sum = 0, sumf, max, rr;
    printf("請輸入連加合的最大值:");
    scanf("%d", &max);
    for (pp = 1;; pp = pp + 1) // 中間空格表示終了值未知
    {                          // 迴圈loop開始
        sum = sum + pp;
        if (sum == max)
        {
            sumf = sum;
            rr = pp;
            break; // 當達成時，由於終了值未知所以必須break才能結束程式
        }
        else if (sum > max)
        {
            sumf = sum - pp;
            rr = pp - 1;
            break;
        }
    } // 迴圈loop結束
    printf("1+2+3+...+%d=%d<=%d\n", rr, sumf, max);
}