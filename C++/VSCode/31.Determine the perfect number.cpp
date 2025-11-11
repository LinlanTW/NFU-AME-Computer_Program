#include <stdio.h>
int main()
{
    int pp, sum = 0, num;
    printf("請輸入一正整數判斷其是否為完美數:"); // 6,28,496,8128,33550336
    scanf("%d", &num);
    for (pp = 1; pp < num; pp = pp + 1)
    {                      // 迴圈開始
        if (num % pp == 0) // 判斷pp是否為num的因數
        {                  // 是因數
            sum = sum + pp;
        }
    } // 迴圈結束
    if (sum == num)
    {
        printf("%d 是完美數\n", num);
    }
    else
    {
        printf("%d 不是完美數\n", num);
    }
}