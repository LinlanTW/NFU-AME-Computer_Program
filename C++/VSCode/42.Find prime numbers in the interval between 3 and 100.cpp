#include <stdio.h>
int main()
{
    int pp, num, count = 0, count2 = 0, sum = 0;
    printf("請尋找某數到某數區間的質數\n");
    /*scanf("%d", &num);*/
    for (num = 3; num <= 100; num++)  // num=3 4 5 6 7 8..... 100
    {                                 // 外
        count = 0;                    // 每次達成質數時 將count歸0
        for (pp = 1; pp <= num; pp++) // pp 1 2 3 4 5 6
        {                             // 內
            if (num % pp == 0)        // 判斷pp是否為num的因數
            {
                count++; // count=count+1
            } // 內
        }
        if (count == 2)
        {
            count2++; // count2=count2+1
            sum = sum + num;
            printf("%-3d是質數 ", num);
            if (count2 % 5 == 0)
            {
                printf("\n"); // 每五個質數換行
            }
        }
        else
        {
            /*printf("所輸入的數%d，是合數。\n", num);*/
        }
    } // 外
    printf("\n3到100之間共有%d個質數，質數總和為%d。\n", count2, sum);
}