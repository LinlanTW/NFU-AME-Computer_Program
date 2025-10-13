#include <stdio.h>
int main()
{
    int pp, sum = 0;
    for (pp = 1; pp <= 5; pp = pp + 1) // 全部的數相加 初始值 1 第二次1+1=2 第三次 3 四 4 持續迴圈
    {
        printf("目前的pp:%d\n", pp);
        sum = sum + pp;
        printf("目前的sum:%d\n", sum);
    }
    printf("最後的sum:%d\n", sum);
}