#include <stdio.h>
int main()
{
    int pp, sum = 0;
    for (pp = 2; pp <= 20; pp = pp + 2) // 偶數相加 解析 初始值是2 則第二累加 2+2=4 第三 6 第四 8 持續迴圈
    {
        printf("目前的pp:%d\n", pp);
        sum = sum + pp;
        printf("目前的sum:%d\n", sum);
    }
    printf("最後的sum:%d\n", sum);
}