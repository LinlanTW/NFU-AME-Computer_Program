// 1.	�ЧQ��scanf()�̧ǿ�J�����ܼ�(A�BX�BB�BY�BC�BZ);
// �p�L��A��ī�GB�ڭ���C�����n�������P�ǡA
// �Q�nī�G���P�Ǧ�X�H;�Q�n�������P�Ǧ�Y�H;
// �Q�n��窺�P�Ǧ�Z�H�A
// �ЧQ��printf��X�C�H���쪺���G�B�ѤU�X�ӡC(A�BX�BB�BY�BC�BZ�ҥѦѮv���w)	30%
#include <stdio.h>
int main()
{
    int a, x, b, y, c, z, apple, apple_d, bana, bana_d, tao, tao_d;
    printf("�п�J�p�L��A��ī�GB�ڭ���C�����n�������P��\n");
    printf("�Q�nī�G���P�Ǧ�X�H;�Q�n�������P�Ǧ�Y�H;\n");
    printf("�Q�n��窺�P�Ǧ�Z�H;\n");
    scanf("%d %d %d %d %d %d", &a, &x, &b, &y, &c, &z); // ���G:aī�Gb����c��� �H:xī�Gy����z���
    apple = a / x;                                      // ī�G��
    apple_d = a % x;                                    // ī�G�l
    bana = b / y;                                       // ������
    bana_d = b % y;                                     // �����l
    tao = c / z;                                        // ����
    tao_d = c % z;                                      // ���l
    printf("ī�G�C�H�i�H����%d���A�ѤU%d���C\n", apple, apple_d);
    printf("�����C�H�i�H����%d�ڡA�ѤU%d�ڡC\n", bana, bana_d);
    printf("���C�H�i�H����%d��A�ѤU%d��C\n", tao, tao_d);
}