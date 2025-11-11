// 用for迴圈印出1~100之間6可被六的整除的整數
#include <stdio.h>
int main()
{
    int ii, count = 0, sum = 0;
    for (ii = 1; ii <= 100; ii = ii + 1) // ii=1,2,3,4,5,...,num
    {                                    // 迴圈開始
        if (ii % 6 == 0)                 // 判斷ii是否為num的因數
        {                                // 是因數
            printf("%d 是可被%d整除的數\n", ii, 6);
        }
    } // 迴圈結束
}