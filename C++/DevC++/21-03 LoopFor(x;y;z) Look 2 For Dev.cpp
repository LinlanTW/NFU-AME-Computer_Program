#include <stdio.h>
int main()
{
    int pp, sum = 0;
    for (pp = 2; pp <= 20; pp = pp + 2) // ���Ƭۥ[ �ѪR ��l�ȬO2 �h�ĤG�֥[ 2+2=4 �ĤT 6 �ĥ| 8 ����j��
    {
        printf("�ثe��pp:%d\n", pp);
        sum = sum + pp;
        printf("�ثe��sum:%d\n", sum);
    }
    printf("�̫᪺sum:%d\n", sum);
}