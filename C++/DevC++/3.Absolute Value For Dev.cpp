#include<stdio.h>
int main()
{
int num;
printf("�п�J�@�Ӿ�ƨ������\n");
scanf("%d",&num);
if(num>=0)//1
    {
    printf("�ҿ�J���Ƭ�%d,,������Ȭ�%d",num,num);
    }
else //2 num<0
    {
    printf("�ҿ�J���Ƭ�%d,,������Ȭ�%d",num,-1*num); //num���H-1
    }
}