// 養了一窩兔子 但不知道有幾隻 三隻三隻數多一隻 五隻五隻數多三隻
// 七隻七隻數多二隻 請問最少有幾隻兔子?
#include <stdio.h>
int main()
{
    int num;
    num = 1;
    while (1)
    {
        if (num % 3 == 1 && num % 5 == 3 && num % 7 == 2)
        {
            printf("最少有 %d 隻兔子\n", num);
            break;
        }
        num = num + 1;
    }
}