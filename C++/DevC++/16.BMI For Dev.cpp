#include <stdio.h>
int main()
{
    int h, w;
    float bmi;
    printf("�п�J����:�����A�魫:����A�p��BMI�P�_�L���B���`�ιL��(�ȭp���ƭ�)\n");
    scanf("%d %d", &h, &w);
    bmi = w / ((h / 100.0) * (h / 100.0)); // �S�O �p�Gh,w�@�}�l�]�w��int�@���ƹB��l
                                           //   ���p�G�b�p��� ���p ��/100 -> ��/100.0
                                           //       �|�j���ܬ��B�I�p���
    if (bmi <= 18.5)
    {
        printf("�A��BMI=%f�A�L���F�@!", bmi);
    }
    else if (bmi >= 24) // 2
    {
        printf("�A��BMI=%f�A�L���F�@!", bmi);
    }
    else
    {
        printf("�A��BMI=%f�A���n!", bmi);
    }
}