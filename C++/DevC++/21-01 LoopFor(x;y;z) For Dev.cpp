#include <stdio.h>
int main()
{
    int pp, sum = 0;
    for (pp = 1; pp <= 5; pp = pp + 1) // �������Ƭۥ[ ��l�� 1 �ĤG��1+1=2 �ĤT�� 3 �| 4 ����j��
    {
        printf("�ثe��pp:%d\n", pp);
        sum = sum + pp;
        printf("�ثe��sum:%d\n", sum);
    }
    printf("�̫᪺sum:%d\n", sum);
}