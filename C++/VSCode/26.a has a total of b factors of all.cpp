#include <stdio.h>
int main()
{
    int ii, num, count = 0, sum = 0;
    printf("請輸入一個正整數求其因數:");
    scanf("%d", &num);
    for (ii = 1; ii <= num; ii = ii + 1) // ii=1,2,3,4,5,...,num
    {
        if (num % ii == 0) // 判斷ii是否為num的因數
        {                  // 是因數
            /*printf("%d 是 %d 的因數\n", ii, num);*/
            count = count + 1;
            sum = sum + ii;
        }
    }
    printf("%d 的因數共有 %d 個，其因數和 = %d\n", num, count, sum);
}