#include<stdio.h>
int main()
{
int buy;
float pay;
printf("請輸入購物金額，一萬元以上打95折\n");
scanf("%d",&buy);//
if(buy>10000)//1.大於10000
    {
    pay=buy*0.95;
    printf("買了%d元，付了%f元\n",buy,pay); //大於10000打95折
    }
else //2.小於等於10000
    {
    pay=buy*1.0;
    printf("買了%d元,付了%f元\n",buy,pay);
    }
}