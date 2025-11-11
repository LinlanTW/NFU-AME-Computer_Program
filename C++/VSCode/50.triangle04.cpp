#include <stdio.h>
int main()
{
    int ii, jj;
    for (ii = 1; ii <= 5; ii++)
    {
        for (jj = 1; jj <= ii; jj++)
        {
            printf("%d", jj);
        } // 內迴圈
        printf("\n"); // 每5個換一行
    } // 外迴圈
}