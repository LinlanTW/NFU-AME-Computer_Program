#include <stdio.h>
int main()
{
    int score;
    printf("�п�J���Z�P�_���ġA�ϥε��c�Ƹ��|���\n");
    scanf("%d", &score);
    switch (score / 10) // ����
    {
    case 10: // 100
        printf("�ҿ�J���Z:%d��A����\n", score);
        break; // ���_
    case 9:    // 90-99
        printf("�ҿ�J���Z:%d��A����\n", score);
        break; // ���_
    case 8:    // 80-89
        printf("�ҿ�J���Z:%d��B����\n", score);
        break; // ���_
    case 7:    // 70-79
        printf("�ҿ�J���Z:%d��C����\n", score);
        break; // ���_
    case 6:    // 60-69
        printf("�ҿ�J���Z:%d��D����\n", score);
        break; // ���_
    default:   // �H�W�ҫD0-59 �S�� �H�W�רҬҤ��ŦX
        printf("�ҿ�J���Z:%d���ή�\n", score);
        break;
    }
}