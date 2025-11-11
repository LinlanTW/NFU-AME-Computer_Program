#include <stdio.h>
int main()
{
    int ii, jj;
    char row, column;                  // char 文字宣告
    for (row = 'A'; row <= 'E'; row++) // 單引號代表一個字元一個字母
    {
        for (column = 'A'; column <= row; column++)
        {
            printf("%c", column); // %c 印字元 雙引號代表字串將字母串在一起
            /*%d印整數 %f印浮點數 %c印字元 %s印字串*/
        } // 內迴圈
        printf("\n");
    }
}