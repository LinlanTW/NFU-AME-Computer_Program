#include <stdio.h>
int main()
{
    int hr;
    float coin;
    printf("�п�J�A�W�Z���ɶ�(�p�ɨ����)\n"); // 90-100A,60-69D
    scanf("%d", &hr);                           //%f�O���B�I�� �Y���p���I����
    // �P�_��
    if (hr <= 60) // �p��60�p�ɪ������H75
    {
        coin = hr * 75;
        printf("�W�Z�ɶ�:%d�p�ɡA�ȤF%f��\n", hr, coin);
    }
    else if (hr >= 61 && hr <= 75) // �W�L60�Ӥp�ɪ��ɶ�*1.25��
    {
        coin = 60 * 75 + (hr - 60) * 75 * 1.25;
        printf("�W�Z�ɶ�:%d�p�ɡA�ȤF%f��\n", hr, coin);
    }
    else if (hr >= 76) // �W�L60�Ӥp�ɪ��ɶ�*1.25�� ���w���W�L75�p�ɫh75-60=15 �W�L75�Ӥp�ɪ��ɶ�*1.75��
    {
        coin = (60 * 75) + (15 * 75 * 1.25) + ((hr - 75) * 75 * 1.75);
        printf("�W�Z�ɶ�:%d�p�ɡA�ȤF%f��\n", hr, coin);
    }
}