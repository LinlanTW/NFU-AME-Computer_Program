#include <stdio.h>
int main()
{
	int ti;
	float x, pay;
	printf("�п�J�p�{�����f�����{\n");
	scanf("%f", &x);
	printf("�п�J�f���ɬq(�դ�0/�]��1)\n");
	scanf("%d", &ti);
	if (x <= 2)
	{
		if (ti == 0)
		{
			printf("�`���B=50��\n");
		}
		else if (ti == 1)
		{
			pay = 50.0 * 1.2;
			printf("�`���B=%0.3f��\n", pay);
		}
	}
	else if (x >= 3 && x <= 5)
	{
		if (ti == 0)
		{
			pay = 50.0 + x * 15.0;
			printf("�`���B=%0.3f��\n", pay);
		}
		else if (ti == 1)
		{
			pay = (50.0 + x * 15.0) * 1.2;
			printf("�`���B=%0.3f��\n", pay);
		}
	}
	else if (x >= 6 && x <= 10)
	{
		if (ti == 0)
		{
			pay = 50.0 + 3 * 15.0 + (x - 5) * 12.0;
			printf("�`���B=%0.3f��\n", pay);
		}
		else if (ti == 1)
		{
			pay = (50.0 + 3 * 15.0 + (x - 5) * 12.0) * 1.2;
			printf("�`���B=%0.3f��\n", pay);
		}
	}
	else if (x > 10)
	{
		if (ti == 0)
		{
			pay = 50.0 + 3 * 15.0 + 5 * 12.0 + (x - 10) * 10.0;
			printf("�`���B=%0.3f��\n", pay);
		}
		else if (ti == 1)
		{
			pay = (50.0 + 3 * 15.0 + 5 * 12.0 + (x - 10) * 10.0) * 1.2;
			printf("�`���B=%0.3f��\n", pay);
		}
	}
}
