#include <stdio.h>
int main()
{
    int ii, jj;
    for (ii = 5; ii >= 1; ii--) // ii--=ii=ii-1
    {
        for (jj = 1; jj <= ii; jj++)
        {
            printf("@");
        } // 內迴圈
        printf("\n"); // 每5個換一行
    } // 外迴圈
}