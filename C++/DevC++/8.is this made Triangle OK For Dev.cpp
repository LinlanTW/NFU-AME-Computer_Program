#include <stdio.h>
int main()
{
    int a, b, c;
    printf("��J�T���Ϊ��T����(�u����Ƥp���I����)\n");
    scanf("%d %d %d", &a, &b, &c);           //
    if (a + b > c && b + c > a && c + a > b) // 1.�na+b�j��c b+c�j��a c+a�j��b �T�����n�F���~�i�q�L
    {
        printf("�i�H�����T����!\n");
    }
    else // 2.�H�W������@�����F���h���i����
    {
        printf("���i�����T����!");
    }
}