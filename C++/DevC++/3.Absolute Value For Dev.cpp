#include<stdio.h>
int main()
{
int num;
printf("請輸入一個整數取絕對值\n");
scanf("%d",&num);
if(num>=0)//1
    {
    printf("所輸入的數為%d,,取絕對值為%d",num,num);
    }
else //2 num<0
    {
    printf("所輸入的數為%d,,取絕對值為%d",num,-1*num); //num乘以-1
    }
}