// �D�عw�]
// �C4�~�@���|�~
// ���C100�~���|
// ���C400�~�S�|
#include <stdio.h>
int main()
{
    int year; // ���]cc�O����
    printf("�п�J��v�~�P�_�|�~�Υ��~\n");
    scanf("%d", &year);
    if (year % 4 == 0) // 1 �_���P�_ �P�_Year/4�l�Ƶ�������0 �p�G������0�i�J�_���P�_ �p�G������0����else
    {
        if (year % 100 != 0) // 1-1 �i�J�_���P�_ �p�GYear/100 �l�Ƥ�����0 �h���|�~
        {
            printf("�ҿ�J����v�~:%d�O�|�~\n", year);
        }
        else if (year % 100 == 0 && year % 400 == 0) // 1-2 �i�J�_���P�_ �p�GYear/100 �l�ƥ�����0 �B Year/400�]������0 �h���|�~
        {
            printf("�ҿ�J����v�~:%d�O�|�~\n", year);
        }
        else
        {
            printf("�ҿ�J����v�~:%d���O�|�~\n", year);
        }
    }
    else // 2
    {
        printf("�ҿ�J����v�~:%d���O�|�~\n", year);
    }
}