// 2.�Y�P�ǥh���ҷӡA�Ҹդ����Ǭ�B�N��A�мg�@�ӵ{���A�i��J�Ǭ즨�Z�P�N�즨�Z(�ҥѱЮv���w)
// �䤤�@�줣�ή�N�⥢��(�ή����70��)�A�åB��ܤ��ή檺��ءC

#include <stdio.h>
int main()
{
    int learn, suke;
    printf("�Ф��O��J�Ǭ�B�N�쪺���Z\n");
    scanf("%d %d", &learn, &suke);
    if (learn >= 70 && suke >= 70)
    {
        printf("�Ǭ�%d���A�N��%d���A���ߧA���o�F�ҷӡC\n", learn, suke);
    }
    else if (learn < 70)
    {
        printf("�Ǭ�%d���A�N��%d���A�]�Ǭ줣�ή�A�Щ��~�A�ӡC\n", learn, suke);
    }
    else if (suke < 70)
    {
        printf("�Ǭ�%d���A�N��%d���A�]�N�줣�ή�A�Щ��~�A�ӡC\n", learn, suke);
    }
}