#include <stdio.h>
int main()
{
    int ii, jj;
    for (ii = 1; ii <= 5; ii++)
    {
        for (jj = 1; jj <= 5; jj++)
        {
            printf("@");
        } // 內迴圈
        printf("\n"); // 每5個換一
    } // 外迴圈
}