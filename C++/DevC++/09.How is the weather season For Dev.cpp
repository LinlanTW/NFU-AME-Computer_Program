#include <stdio.h>
int main()
{
    int month;
    printf("�п�J����P�_�u�`\n"); // 2-4�K,5-7�L8-10��,11-1�V
    scanf("%d", &month);
    // �ި����d
    if (month < 1 || month > 12)
    {
        printf("�ҿ�J�����:%d���~�A�п�J1~12\n", month);
        return 0; // �����{��
    }
    // �P�_��
    if (month >= 2 && month <= 4) // 2-4
    {
        printf("�ҿ�J�����:%d���K��\n", month);
    }
    else if (month >= 5 && month <= 7) // 5-7
    {
        printf("�ҿ�J�����:%d���L��\n", month);
    }
    else if (month >= 8 && month <= 10) // 8-10
    {
        printf("�ҿ�J�����:%d�����\n", month);
    }
    else if ((month >= 11 && month <= 12) || month == 1) // 11-12 1 �S�O�`�N ||(�Ϊ�) �O���b()���P�O�����S�O�B�~
    {
        printf("�ҿ�J�����:%d���V��\n", month);
    }
}