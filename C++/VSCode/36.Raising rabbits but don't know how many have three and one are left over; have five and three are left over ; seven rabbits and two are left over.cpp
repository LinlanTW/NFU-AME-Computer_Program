// 養了一窩兔子 但不知道有幾隻 三隻三隻數多一隻 五隻五隻數多三隻
// 七隻七隻數多二隻 請問最少有幾隻兔子?
#include <stdio.h>
int main()
{
    int pp, count;
    for (pp = 1; count = 1; pp = pp + 1)
    {
        if (pp % 3 == 1 && pp % 5 == 3 && pp % 7 == 2)
        {
            printf("最少有 %d 隻兔子\n", pp);
            break;
        }
        count = 1;
    }
}