#include <stdio.h>
int main()
{
    int buy;
    float pay; // �B�I��� �i�H�X�{�p���I
    printf("�п�J�ʪ����B�A�@�U���H�W�A�Ȱw��U���H�W��95��\n");
    scanf("%d", &buy); //
    if (buy > 10000)   // 1.�j��10000
    {
        pay = (buy - 10000) * 0.95 + 10000; // �z�� �I����=(�ʶR������-10000)*95��b�[10000�^�h
        printf("�R�F%d���A�I�F%f��\n", buy, pay);
    }
    else // 2.�p�󵥩�10000
    {
        pay = buy * 1.0;
        printf("�R�F%d��,�I�F%f��\n", buy, pay);
    }
}