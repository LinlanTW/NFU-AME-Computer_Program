/*    1
     12
    123
   1234
  12345 */
#include <stdio.h>
int main()
{
    int ii, jj;
    for (ii = 5; ii >= 1; ii--)
    {
        for (jj = 1; jj <= 5; jj++)
        {
            if (jj < ii)
            {
                printf(" ");
            }
            else
            {
                printf("%d", jj - ii + 1);
            }
        } // 內迴圈
        printf("\n"); // 每5個換一行
    } // 外迴圈
}