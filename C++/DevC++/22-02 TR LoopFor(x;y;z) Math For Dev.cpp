// 利用for迴圈 計算1^2-2^2+3^2-4^2......-50^2
#include <stdio.h>
#include <math.h>
int main()
{
    int pp, sum1 = 0, sum2 = 0, sum = 0;
    for (pp = 1; pp <= 50; pp = pp + 1) // 奇數
    {
        sum = sum + pow(-1, pp + 1) * pp * pp; // 數學函式 : pow(x,y) 幕次方 5的4次方 pow(5,4) power
    }
    printf("1^2-2^2+^2-4^2......-50^2:%d\n", sum);
}