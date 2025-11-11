#include <stdio.h>
#include <math.h>
int main()
{
    int kk, sum, num, h, hr, t, tr;
    printf("請輸入一個三位數判斷是否為阿姆斯壯數:"); // 153=1^3+5^3+3^3
    scanf("%d", &num);
    if (num < 100 || num > 999)
    {
        printf("輸入的數字不是三位數!");
        return 0;
    }
    h = num / 100;                            // 百位數
    hr = num % 100;                           // 餘數
    t = hr / 10;                              // 十位數
    tr = hr % 10;                             // 個位數
    sum = pow(h, 3) + pow(t, 3) + pow(tr, 3); // power
    if (sum == num)
    {
        printf("%d 是阿姆斯壯數\n", num);
    }
    else
    {
        printf("%d 不是阿姆斯壯數\n", num);
    }
}