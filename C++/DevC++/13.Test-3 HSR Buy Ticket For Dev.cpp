// 3.�p�t�b�����W�q���K�A�@�i���K��1415���A����J�K�X:7414�A�Y��J���~�h��ܱK�X���~�B�{������C'
// ��J���T���ܲ���:��������J1;������J2;�ǥͲ���J3�A�A��ܮy��:�ۥѮy��J4�B�︹�y��J5�C
// �̫�p�t�ݭn�I�h�ֿ��C(��J�����ƭȥѱЮv���w)�C40%
// ��ܲ���
// ��J	����	�u�f
// 1	������	��65��
// 2	����	�L�u�f
// 3	�ǥͲ�	��88��
// ��ܮy��
// 4	�ۥѮy	���[��
// 5	�︹�y	�[20��
#include <stdio.h>
int main()
{
    int password, ticket, seat; // �w�q�K�X�A���ءA�y��
    float pay;                  // �w�q�h�ֿ��̷��D�N�|���p���I
    printf("�п�J�K�X\n");
    scanf("%d", &password);
    // �ި����d
    if (password != 7414) // �p�G���פ�����7414
    {
        printf("�K�X���~\n");
        return 0; // �{������
    }
    printf("�K�X���T\n�п�ܲ���:��������J1;������J2;�ǥͲ���J3\n");
    scanf("%d", &ticket); // ��J����
    printf("�п�ܮy��:�ۥѮy��J4�B�︹�y��J5\n");
    scanf("%d", &seat); // ��J�y��
    // �P�_��
    if (ticket == 1) // ���إ�����1
    {
        printf("������ ");
    }
    else if (ticket == 2) // ���إ�����2
    {
        printf("���� ");
    }
    else if (ticket == 3) // ���إ�����3
    {
        printf("�ǥͲ� ");
    }
    // �H�W����X�ҿ�J������//
    // �H�U���ҿ�J�����ؤήy���X����//
    if (ticket == 1 && seat == 4) // ���إ�����1 �B �y�������4
    {
        pay = 1415 * 0.65;          // ����65��
        printf("�ۥѮy%0.2f", pay); //%0.2f�Y�p���I����//�e���w��X���ئb��X�y��
        return 0;                   // �{������
    }
    else if (ticket == 1 && seat == 5) // ���إ�����1 �B �y�������5
    {
        pay = 1415 * 0.65 + 20;     // ����65��+20�����w�u
        printf("�︹�y%0.2f", pay); // �e���w��X���ئb��X�y��
        return 0;                   // �{������
    }
    else if (ticket == 2 && seat == 4) // ���إ�����2 �B �y�������4
    {
        pay = 1415;                 // �������
        printf("�ۥѮy%0.2f", pay); // �e���w��X���ئb��X�y��
        return 0;                   // �{������
    }
    else if (ticket == 2 && seat == 5) // ���إ�����2 �B �y�������5
    {
        pay = 1415 + 20;            // �������+20�����w�u
        printf("�︹�y%0.2f", pay); // �e���w��X���ئb��X�y��
        return 0;                   // �{������
    }
    else if (ticket == 3 && seat == 4) // ���إ�����3 �B �y�������4
    {
        pay = 1415 * 0.88;          // �ǥͲ�88��
        printf("�ۥѮy%0.2f", pay); // �e���w��X���ئb��X�y��
        return 0;                   // �{������
    }
    else if (ticket == 3 && seat == 5) // ���إ�����3 �B �y�������5
    {
        pay = 1415 * 0.88 + 20;     // �ǥͲ�+���w�u
        printf("�︹�y%0.2f", pay); // �e���w��X���ئb��X�y��
        return 0;                   // �{������
    }
}