#include <stdio.h>
int main()
{
    int pp, sum = 0;
    for (pp = 1; pp <= 20; pp = pp + 2) // �_�Ƭۥ[ �ѪR ��l�ȬO1 �h�ĤG�֥[ 1+2=3 �ĤT 5 �ĥ| 7 ����j��
    {
        printf("�ثe��pp:%d\n", pp);
        sum = sum + pp;
        printf("�ثe��sum:%d\n", sum);
    }
    printf("�̫᪺sum:%d\n", sum);
}