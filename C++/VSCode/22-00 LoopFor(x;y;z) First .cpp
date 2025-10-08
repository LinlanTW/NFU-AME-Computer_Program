// 利用for迴圈 計算1^2-2^2+3^2-4^2......-50^2
#include <stdio.h>
#include <math.h>
int main()
{
    int pp1, sum1 = 0, pp2, sum2 = 0;
    for (pp1 = 1; pp1 <= 50; pp1 = pp1 + 2) // 奇數
    {
        sum1 = pp1 * pp1;
        sum1 = sum1 + pp1;
        // printf("目前的sum:%d\n", sum);
    }
    printf("奇數最後的sum:%d\n", sum1);
    for (pp2 = 2; pp2 <= 50; pp2 = pp2 + 2) // 偶數
    {
        // printf("目前的pp:%d\n", pp);
        // sum2 = sum2 + pp2;
        sum2 = pp2 * pp2;
        sum2 = sum2 + pp2;
        // printf("目前的sum:%d\n", sum);
    }
    printf("偶數最後的sum:%d\n", sum2);
    printf("1^2-2^2+^2-4^2......-50^2:%d\n", sum1 - sum2);
}