#include <stdio.h>
int main()
{
    int lb;
    float x;
    printf("�п�J�Ʀr�D�������\n"); // ���j��x���̤j���
    scanf("%f", &x);
    lb = x; // �B�I�ƥᵹ����ܽG�F�A�Ʀr����ܤ֤F
    if (x >= 0)
    {
        printf("��J�Ʀr�G%f�A�䰪����ơG%d\n", x, lb);
    }
    else if (x < 0)
    {
        if (lb == x)
        {
            printf("��J�Ʀr�G%f�A�䰪����ơG%d\n", x, lb);
        }
        else if (lb > x)
        {
            printf("��J�Ʀr�G%f�A�䰪����ơG%d\n", x, lb - 1);
        }
    }
}
