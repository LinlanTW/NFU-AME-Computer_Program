#include <stdio.h>
int main()
{
int sex;
printf("�п�J�ʧO�N��0�k��1�k��\n");
scanf("%d",&sex);
//�ި����d 
if(sex!=0 && sex!=1) //if�̭���m�P�O����B�̫ᤣ�[;(����) !=:�N������ &&�i����ؤ��P����F�����@����Y�i
{
	printf("�A�O���O�ӷd���A�п�J���ĭ�:0��1\n");
	return 0;//�{������ ���|���U���� 
}
if(sex==0)//�g�L�e�����d�� 1.���p �G��@ ()����P�_�̾�  �̫ᤣ�[;(����) ==:�N�������
	{
	printf("�ҿ�J���ʧO�N����:%d�k��",sex);
	} 
else//2.�_�h �̫ᤣ�[;(����)
	{
	printf("�ҿ�J���ʧO�N����:%d�k��",sex);
	}
}