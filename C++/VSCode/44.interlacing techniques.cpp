#include <stdio.h>
int main() // 交錯技巧
{
    int alt = 0, pp, hh;
    for (pp = 1; pp <= 5; pp++)
    {
        for (hh = 1; hh <= 5; hh++)
        {
            if (alt == 0)
            {
                printf("@");
                alt++;
            }
            else if (alt == 1)
            {
                printf("^");
                alt--;
            }
        }
        printf("\n"); // 每印5個換行一次
    }
}