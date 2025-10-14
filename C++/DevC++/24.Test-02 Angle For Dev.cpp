#include <stdio.h>
int main()
{
	int fir, add, end;
	printf("請輸入起始角度\n");
	scanf("%d", &fir);
	printf("請輸入增加的角度值\n");
	scanf("%d", &add);
	end = fir + add;
	if (end == 0 | end == 360)
	{
		printf("總角度%d，落在正X軸上。\n", end);
	}
	else if (end == 180)
	{
		printf("總角度%d，落在負X軸上。\n", end);
	}
	else if (end == 90)
	{
		printf("總角度%d，落在正Y軸上。\n", end);
	}
	else if (end == 270)
	{
		printf("總角度%d，落在負Y軸上。\n", end);
	}
	else if (end >= 1 && end <= 89)
	{
		printf("總角度%d，落在第一象限。\n", end);
	}
	else if (end >= 91 && end <= 179)
	{
		printf("總角度%d，落在第二象限。\n", end);
	}
	else if (end >= 181 && end <= 269)
	{
		printf("總角度%d，落在第三象限。\n", end);
	}
	else if (end >= 181 && end <= 269)
	{
		printf("總角度%d，在第三象限\n", end);
	}
	else if (end >= 271 && end <= 359)
	{
		printf("總角度%d，在第四象限\n", end);
	}
}
