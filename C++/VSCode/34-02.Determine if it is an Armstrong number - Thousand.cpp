#include <stdio.h>
#include <math.h>
int main()
{
    int kk, sum, num, th, thr, h, hr, t, tr;
    printf("請輸入一個四位數判斷是否為阿姆斯壯數:"); // 1634=1^4+6^4+3^4+4^4
    scanf("%d", &num);
    if (num < 1000 || num > 9999)
    {
        printf("輸入的數字不是四位數!");
        return 0;
    }
    th = num / 1000;                                       // 千位數
    thr = num % 1000;                                      // 餘數-百位數
    h = thr / 100;                                         // 百位數
    hr = thr % 100;                                        // 餘數-十位數
    t = hr / 10;                                           // 十位數
    tr = hr % 10;                                          // 餘數-個位數
    sum = pow(th, 4) + pow(h, 4) + pow(t, 4) + pow(tr, 4); // power 指數
    if (sum == num)
    {
        printf("%d 是阿姆斯壯數\n", num);
    }
    else
    {
        printf("%d 不是阿姆斯壯數\n", num);
    }
}