// 2.	�����n�R§���A�L�ǳƤFQ���D��F�T��§���A������O�OA�BB�BC���C
// �ЧQ��if�Belse if�Belse��X���@��§���̶Q�A�N�����������ӶR�̶Q��§���A
// ����̫ܳ�Ѧh�ֿ��C(Q�BA�BB�BC�ҥѱЮv���w) 30%
#include <stdio.h>
int main()
{
    int q, a, b, c, buy, pay_d;
    printf("�ǳƤF�h�ֿ�?\n");
    scanf("%d", &q);
    printf("A§��������?\n");
    scanf("%d", &a);
    printf("B§��������?\n");
    scanf("%d", &b);
    printf("C§��������?\n");
    scanf("%d", &c);
    if (a > b && b > c || a > c && c > b) // a>b>c or a>c>b
    {
        buy = q / a;
        pay_d = q % a;
        printf("A�̶Q�A%d/%d=%d�A��%d���C", q, a, buy, pay_d);
    }
    else if (b > a && a > c || b > c && c > a) // b>a>c or b>c>a
    {
        buy = q / b;
        pay_d = q % b;
        printf("B�̶Q�A%d/%d=%d�A��%d���C", q, b, buy, pay_d);
    }
    else if (c > a && a > b || c > b && b > a) // c>a>b or c>b>a
    {
        buy = q / c;
        pay_d = q % c;
        printf("C�̶Q�A%d/%d=%d�A��%d���C", q, c, buy, pay_d);
    }
}