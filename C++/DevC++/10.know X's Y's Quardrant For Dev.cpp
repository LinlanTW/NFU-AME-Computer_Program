#include <stdio.h>
int main()
{
    float x, y;
    printf("�п�J�y���I�A�P�_�H���έ��I x,y\n"); // 2-4�K,5-7�L8-10��,11-1�V
    scanf("%f %f", &x, &y);                       //%f�O���B�I�� �Y���p���I����
    // �P�_��
    if (x > 0 && y > 0) // �Ĥ@�H��
    {
        printf("�A�ҿ�J���y�Ь�X:%f,Y:%f���Ĥ@�H��\n", x, y);
    }
    else if (x < 0 && y > 0) // �ĤG�H��
    {
        printf("�A�ҿ�J���y�Ь�X:%f,Y:%f���ĤG�H��\n", x, y);
    }
    else if (x < 0 && y < 0) // �ĤT�H��
    {
        printf("�A�ҿ�J���y�Ь�X:%f,Y:%f���ĤT�H��\n", x, y);
    }
    else if ((x > 0 && y < 0)) // �ĥ|�H��
    {
        printf("�A�ҿ�J���y�Ь�X:%f,Y:%f���ĥ|�H��\n", x, y);
    }
    else if ((x == 0 && y == 0)) // ���I
    {
        printf("�A�ҿ�J���y�Ь�X:%f,Y:%f�����I\n", x, y);
    }
}