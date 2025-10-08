#include <stdio.h> //ax**2+bx+c=0
#include <math.h>  //調用數學函式
int main()
{
    float a, b, c, D, n = 0, x1, x2, re, im;
NFUschool:
    n = n + 1;
    printf("請輸入一元二次方程式的係數判斷根的形態及解根\n");
    scanf("%f %f %f", &a, &b, &c);
    D = b * b - 4 * a * c; // 判別式
    if (D > 0)             // 1: 1 3 1
    {
        x1 = -b / (2 * a) + sqrt(D) / (2 * a); // sqrt(28)將28開根號
        x2 = -b / (2 * a) - sqrt(D) / (2 * a);
        printf("所輸入的係數%f,,%f,,%f形成相異實根:x1=%f,,x2=%f\n", a, b, c, x1, x2);
    }
    else if (D == 0) // 2: 1 2 1
    {
        x1 = -b / (2 * a) + sqrt(D) / (2 * a); // sqrt(28)將28開根號
        x2 = -b / (2 * a) - sqrt(D) / (2 * a);
        printf("所輸入的係數%f,,%f,,%f形成相異實根:x1=%f,,x2=%f\n", a, b, c, x1, x2);
    }
    else if (D < 0) // 3: 1 1 1
    {
        re = -b / (2 * a);       // 實部
        im = sqrt(-D) / (2 * a); // 虛部
        printf("所輸入的係數%f,,%f,,%f形成共軛虛根:實部:%f,,虛部:%f\n", a, b, c, re, im);
    }
    if (n == 3)
    {
        return 0; // 程式結束
    }
    goto NFUschool;
}