// 3.�i�B24h�ʪ����x�ʪ��C
// �B�J�@�B�п�ܧA���ʶR�����~:1 �q��;2 ���;3 �վ�;
// ��J	�z���ʶR�����~	���~����
// 1	�q��	50000��
// 2	���	30000��
// 3	�վ�	3000��
// �B�J�G�B�b��ܤ�I�覡: 4�f��I��;5�H�Υd�u�W��I;
// �̫���ܵ��G�C
// ��J	�I�ڤ覡	�馩����
// 4	�f��I��	�`���B��85��
// 5	�u�W��I	�`���B�[60��
#include <stdio.h>
int main()
{
    int item, how_pay, pay, paid_tmp01;
    printf("�i�B24h�ʪ����x�ʪ�\n");
    printf("�п�ܧA���ʶR�����~:1 �q��;2 ���;3 �վ�;?\n�A�ʶR�����~: ");
    scanf("%d", &item);
    printf("��ܤ�I�覡: 4 �f��I��;5 �H�Υd�u�W�I��;?\n�A����I�覡: ");
    scanf("%d", &how_pay);
    if (item == 1) // a>b>c or a>c>b
    {
        printf("�ʶR�q���A");
        paid_tmp01 = 50000;
    }
    else if (item == 2) // b>a>c or b>c>a
    {
        printf("�ʶR����A");
        paid_tmp01 = 30000;
    }
    else if (item == 3) // c>a>b or c>b>a
    {
        printf("�ʶR�վ��A");
        paid_tmp01 = 3000;
    }
    else
    {
        printf("�ڭ̨S���A��J�����~�N���C\n");
        return 0;
    }
    if (how_pay == 4)
    {
        pay = paid_tmp01 * 0.85;
        printf("�f��I�ڡA%d*0.85=%d�A�`���B%d���C", paid_tmp01, pay, pay);
    }
    else if (how_pay == 5)
    {
        pay = paid_tmp01 + 60;
        printf("�u�W��I�A%d+60=%d�A�`���B%d���C", paid_tmp01, pay, pay);
    }
    else
    {
        printf("���ڭ̨S���A��J���I�ڤ覡�C\n");
        return 0;
    }
}