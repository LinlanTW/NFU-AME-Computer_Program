// 1.	請利用scanf()依序輸入六個變數(A、X、B、Y、C、Z);
// 小林有A顆蘋果B根香蕉C串櫻桃要平分給同學，
// 想要蘋果的同學有X人;想要香蕉的同學有Y人;
// 想要櫻桃的同學有Z人，
// 請利用printf輸出每人分到的水果、剩下幾個。(A、X、B、Y、C、Z皆由老師指定)	30%
#include <stdio.h>
int main()
{
    int a, x, b, y, c, z, apple, apple_d, bana, bana_d, tao, tao_d;
    printf("請輸入小林有A顆蘋果B根香蕉C串櫻桃要平分給同學\n");
    printf("想要蘋果的同學有X人;想要香蕉的同學有Y人;\n");
    printf("想要櫻桃的同學有Z人;\n");
    scanf("%d %d %d %d %d %d", &a, &x, &b, &y, &c, &z); // 水果:a蘋果b香蕉c櫻桃 人:x蘋果y香蕉z櫻桃
    apple = a / x;                                      // 蘋果商
    apple_d = a % x;                                    // 蘋果餘
    bana = b / y;                                       // 香蕉商
    bana_d = b % y;                                     // 香蕉餘
    tao = c / z;                                        // 櫻桃商
    tao_d = c % z;                                      // 櫻桃餘
    printf("蘋果每人可以分到%d顆，剩下%d顆。\n", apple, apple_d);
    printf("香蕉每人可以分到%d根，剩下%d根。\n", bana, bana_d);
    printf("櫻桃每人可以分到%d串，剩下%d串。\n", tao, tao_d);
}