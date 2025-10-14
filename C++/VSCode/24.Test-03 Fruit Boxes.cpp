// 富士200 大湖350 櫻桃 960
// 店家 gold*0.95 宅配到府*1.1
#include <stdio.h>
int main()
{
	int buy, give, math;
	float pay, pay_tmp;
	printf("請輸入水果禮盒代號 1.富士蘋果禮盒200元;2.大湖草莓禮盒350元;3.華盛頓櫻桃禮盒960元。\n");
	scanf("%d", &buy);
	printf("請輸入購買數量。\n");
	scanf("%d", &math);
	printf("請輸入宅配方式 1.指定店家;2.宅配到府。\n");
	scanf("%d", &give);
	if (buy == 1)
	{
		pay_tmp = 200;
		pay_tmp = 200 * math;
		printf("購買%d盒富士蘋果禮盒，", math);
	}
	else if (buy == 2)
	{
		pay_tmp = 350;
		pay_tmp = 350 * math;
		printf("購買%d盒大湖草莓禮盒，", math);
	}
	else if (buy == 3)
	{
		pay_tmp = 960;
		pay_tmp = 960 * math;
		printf("購買%d盒大湖草莓禮盒，", math);
	}
	if (give == 1)
	{
		pay = pay_tmp * 0.95;
		printf("指定店家，總金額%0.3f元", pay);
	}
	if (give == 2)
	{
		pay = pay_tmp * 1.1;
		printf("宅配到府，總金額%0.3f元", pay);
	}
}
