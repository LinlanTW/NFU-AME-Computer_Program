// 利用for迴圈 計算1+1/2+1/3+......+1/n
#include <stdio.h>
int main()
{
    int n;
    float pp, sum = 0;
    printf("輸入n的值\n");
    scanf("%d", &n);
    for (pp = 1; pp <= n; pp = pp + 1)
    {
        sum = sum + 1 / pp;
    }
    printf("1+1/2+1/3+......+1/n的值:%f\n", sum);
}