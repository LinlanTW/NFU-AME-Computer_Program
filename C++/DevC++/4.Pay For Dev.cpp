#include<stdio.h>
int main()
{
int buy;
float pay;
printf("�п�J�ʪ����B�A�@�U���H�W��95��\n");
scanf("%d",&buy);//
if(buy>10000)//1.�j��10000
    {
    pay=buy*0.95;
    printf("�R�F%d���A�I�F%f��\n",buy,pay); //�j��10000��95��
    }
else //2.�p�󵥩�10000
    {
    pay=buy*1.0;
    printf("�R�F%d��,�I�F%f��\n",buy,pay);
    }
}