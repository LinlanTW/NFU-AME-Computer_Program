// �Q��for�j�� �p��1^2-2^2+3^2-4^2......-50^2
#include <stdio.h>
#include <math.h>
int main()
{
    int pp, sum1 = 0, sum2 = 0, sum = 0;
    for (pp = 1; pp <= 50; pp = pp + 1) // �_��
    {
        sum = sum + pow(-1, pp + 1) * pp * pp; // �ƾǨ禡 : pow(x,y) ������ 5��4���� pow(5,4) power
    }
    printf("1^2-2^2+^2-4^2......-50^2:%d\n", sum);
}