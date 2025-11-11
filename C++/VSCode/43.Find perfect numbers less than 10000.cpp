#include <stdio.h>
int main() // 尋找完美數
{
    int pp, hh, sum;
    for (pp = 1; pp <= 10000; pp++) // pp=1 2 3 4 5.....10000
    {
        sum = 0;                     // 每次進入外迴圈時 將sum歸0
        for (hh = 1; hh <= pp; hh++) // hh只做到pp的前一個數
        {
            if (hh == pp) // 當hh等於pp時跳過此次迴圈 回到第8行繼續下一次內迴圈
            {
                continue;
            }
            if (pp % hh == 0) // 判斷hh是否為pp的因數
            {
                sum = sum + hh;
            }
        } // 內迴圈
        if (sum == pp) // 判斷sum是否等於pp
        {
            printf("%d是完美數\n", pp);
        } // if成功後輸出完美數，反之不輸出 後繼續迴圈
    } // 外迴圈
}