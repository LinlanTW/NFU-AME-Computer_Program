#include <stdio.h>
int main()
{
	int ti;
	float x, pay;
	printf("請輸入計程車的搭車里程\n");
	scanf("%f", &x);
	printf("請輸入搭車時段(白天0/夜晚1)\n");
	scanf("%d", &ti);
	if (x <= 2)
	{
		if (ti == 0)
		{
			printf("總金額=50元\n");
		}
		else if (ti == 1)
		{
			pay = 50.0 * 1.2;
			printf("總金額=%0.3f元\n", pay);
		}
	}
	else if (x >= 3 && x <= 5)
	{
		if (ti == 0)
		{
			pay = 50.0 + x * 15.0;
			printf("總金額=%0.3f元\n", pay);
		}
		else if (ti == 1)
		{
			pay = (50.0 + x * 15.0) * 1.2;
			printf("總金額=%0.3f元\n", pay);
		}
	}
	else if (x >= 6 && x <= 10)
	{
		if (ti == 0)
		{
			pay = 50.0 + 3 * 15.0 + (x - 5) * 12.0;
			printf("總金額=%0.3f元\n", pay);
		}
		else if (ti == 1)
		{
			pay = (50.0 + 3 * 15.0 + (x - 5) * 12.0) * 1.2;
			printf("總金額=%0.3f元\n", pay);
		}
	}
	else if (x > 10)
	{
		if (ti == 0)
		{
			pay = 50.0 + 3 * 15.0 + 5 * 12.0 + (x - 10) * 10.0;
			printf("總金額=%0.3f元\n", pay);
		}
		else if (ti == 1)
		{
			pay = (50.0 + 3 * 15.0 + 5 * 12.0 + (x - 10) * 10.0) * 1.2;
			printf("總金額=%0.3f元\n", pay);
		}
	}
}
