#include <stdio.h> //ax**2+bx+c=0
#include <math.h>  //�եμƾǨ禡
int main()
{
    float a, b, c, D, n = 0, x1, x2, re, im;
NFUschool:
    n = n + 1;
    printf("�п�J�@���G����{�����Y�ƧP�_�ڪ��κA�θѮ�\n");
    scanf("%f %f %f", &a, &b, &c);
    D = b * b - 4 * a * c; // �P�O��
    if (D > 0)             // 1: 1 3 1
    {
        x1 = -b / (2 * a) + sqrt(D) / (2 * a); // sqrt(28)�N28�}�ڸ�
        x2 = -b / (2 * a) - sqrt(D) / (2 * a);
        printf("�ҿ�J���Y��%f,,%f,,%f�Φ��۲����:x1=%f,,x2=%f\n", a, b, c, x1, x2);
    }
    else if (D == 0) // 2: 1 2 1
    {
        x1 = -b / (2 * a) + sqrt(D) / (2 * a); // sqrt(28)�N28�}�ڸ�
        x2 = -b / (2 * a) - sqrt(D) / (2 * a);
        printf("�ҿ�J���Y��%f,,%f,,%f�Φ��۲����:x1=%f,,x2=%f\n", a, b, c, x1, x2);
    }
    else if (D < 0) // 3: 1 1 1
    {
        re = -b / (2 * a);       // �곡
        im = sqrt(-D) / (2 * a); // �곡
        printf("�ҿ�J���Y��%f,,%f,,%f�Φ��@�m���:�곡:%f,,�곡:%f\n", a, b, c, re, im);
    }
    if (n == 3)
    {
        return 0; // �{������
    }
    goto NFUschool;
}