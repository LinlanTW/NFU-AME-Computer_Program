#include <stdio.h>
int main()
{
    int ii, jj;
    for (ii = 1; ii <= 5; ii++) // 排列前五個
    {
        for (jj = 1; jj <= ii; jj++)
        {
            printf("@");
        }
        printf("\n"); // 每5個換一
    }
    for (ii = 4; ii >= 1; ii--) // 排列後四個
    {
        for (jj = 1; jj <= ii; jj++)
        {
            printf("@");
        }
        printf("\n"); // 每5個換一
    }
}