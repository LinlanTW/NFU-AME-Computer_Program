#include <stdio.h>
int main()
{
    int score;
    printf("�п�J���Z�P�_����\n"); // 90-100A,60-69D
    scanf("%d", &score);            //%f�O���B�I�� �Y���p���I����
    // �P�_��
    if (score >= 90 && score <= 100) // 1
    {
        printf("�ҿ�J���Z:%d��A����\n", score);
    }
    else if (score >= 80 && score <= 89) // 2
    {
        printf("�ҿ�J���Z:%d��B����\n", score);
    }
    else if (score >= 70 && score <= 79) // 3
    {
        printf("�ҿ�J���Z:%d��C����\n", score);
    }
    else if ((score >= 60 && score <= 69)) // 4
    {
        printf("�ҿ�J���Z:%d��D����\n", score);
    }
    else if ((score >= 0 && score <= 59)) // 5
    {
        printf("�ҿ�J���Z:%d���ή�\n", score);
    }
}