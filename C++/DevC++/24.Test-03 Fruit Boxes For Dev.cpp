// �I�h200 �j��350 ��� 960
// ���a gold*0.95 �v�t�쩲*1.1
#include <stdio.h>
int main()
{
	int buy, give, math;
	float pay, pay_tmp;
	printf("�п�J���G§���N�� 1.�I�hī�G§��200��;2.�j����§��350��;3.�ز��y���§��960���C\n");
	scanf("%d", &buy);
	printf("�п�J�ʶR�ƶq�C\n");
	scanf("%d", &math);
	printf("�п�J�v�t�覡 1.���w���a;2.�v�t�쩲�C\n");
	scanf("%d", &give);
	if (buy == 1)
	{
		pay_tmp = 200;
		pay_tmp = 200 * math;
		printf("�ʶR%d���I�hī�G§���A", math);
	}
	else if (buy == 2)
	{
		pay_tmp = 350;
		pay_tmp = 350 * math;
		printf("�ʶR%d���j����§���A", math);
	}
	else if (buy == 3)
	{
		pay_tmp = 960;
		pay_tmp = 960 * math;
		printf("�ʶR%d���j����§���A", math);
	}
	if (give == 1)
	{
		pay = pay_tmp * 0.95;
		printf("���w���a�A�`���B%0.3f��", pay);
	}
	if (give == 2)
	{
		pay = pay_tmp * 1.1;
		printf("�v�t�쩲�A�`���B%0.3f��", pay);
	}
}
