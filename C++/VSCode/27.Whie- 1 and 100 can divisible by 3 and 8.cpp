#include <stdio.h>
int main()
{
    int pp, sum = 0, count = 0;
    pp = 1;
    while (pp <= 100)                   // pp=1,2,3,...,100
    {                                   // 迴圈loop開始
        if (pp % 3 == 0 && pp % 8 == 0) // 能不能被3和8整除如果整除餘數為0 又或稱 pp%24==0
        {
            sum = sum + pp;
            count = count + 1;
        }
        pp = pp + 1;
    } // 迴圈loop結束
    printf("1~100之間可被3和8整除的數共有%d個，總和=%d\n", count, sum);
}