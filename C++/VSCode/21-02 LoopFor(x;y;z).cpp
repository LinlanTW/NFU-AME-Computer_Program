#include <stdio.h>
int main()
{
    int pp, sum = 0;
    for (pp = 1; pp <= 10; pp = pp + 1)
    {
        printf("目前的pp:%d\n", pp);
        sum = sum + pp;
        printf("目前的sum:%d\n", sum);
    }
    printf("最後的sum:%d\n", sum);
}