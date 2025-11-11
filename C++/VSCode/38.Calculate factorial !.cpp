#include <stdio.h>
int main()
{
    int kk, factorial = 1, n; // 乘法的基礎是1，任何數*1等於原數;加法的基礎是0，任何數+0等於原數。
    printf("請輸入計算階乘的數\n");
    scanf("%d", &kk);
    n = kk;
    do
    {
        factorial = factorial * kk;
        kk = kk - 1;
    } while (kk >= 1); // 此處while後需要加分號，小括號的條件達成的話繼續迴圈，直到條件不成立。
    printf("%d! = (%d)*(%d-1)*(%d-2)*......*1=%d\n", n, n, n, n, factorial);
}