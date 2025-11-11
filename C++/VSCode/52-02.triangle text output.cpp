/*    1
     12
    123
   1234
  12345 */
#include <stdio.h>
int main()
{
    int ii, jj;
    char row, column; // char 文字宣告
    for (row = 'E'; row >= 'A'; row--)
    {
        for (column = 'A'; column <= 'E'; column++)
        {
            if (column < row)
            {
                printf(" ");
            }
            else
            {
                printf("%c", column - row + 'A');
            }
        } // 內迴圈
        printf("\n"); // 每5個換一行
    } // 外迴圈
}