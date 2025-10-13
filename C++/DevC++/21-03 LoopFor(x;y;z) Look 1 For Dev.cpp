#include <stdio.h>
int main()
{
    int pp, sum = 0;
    for (pp = 1; pp <= 20; pp = pp + 2) // 奇數相加 解析 初始值是1 則第二累加 1+2=3 第三 5 第四 7 持續迴圈
    {
        printf("目前的pp:%d\n", pp);
        sum = sum + pp;
        printf("目前的sum:%d\n", sum);
    }
    printf("最後的sum:%d\n", sum);
}