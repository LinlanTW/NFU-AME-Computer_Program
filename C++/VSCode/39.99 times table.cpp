#include <stdio.h>
int main()
{
    int ii, jj;
    for (ii = 1; ii <= 9; ii++)                    // ii++<=>ii=ii+1
    {                                              // 外迴圈
        for (jj = 1; jj <= 9; jj++)                // jj=jj+1
        {                                          // 內迴圈
            printf("%d*%d=%-4d", jj, ii, jj * ii); // 1*1=1 1*2=2 1*3=3.......1*9=9
            //-4d解析，口口口口<-4個格子 - 從左邊先填 4d 口口口口<-4個格子 +(忽略) 從右邊先填
        } // 內迴圈
        printf("\n"); // 每印9個換行一次
    } // 外迴圈
}