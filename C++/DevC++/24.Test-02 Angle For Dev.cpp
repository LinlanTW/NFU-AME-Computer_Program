#include <stdio.h>
int main()
{
	int fir, add, end;
	printf("�п�J�_�l����\n");
	scanf("%d", &fir);
	printf("�п�J�W�[�����׭�\n");
	scanf("%d", &add);
	end = fir + add;
	if (end == 0 | end == 360)
	{
		printf("�`����%d�A���b��X�b�W�C\n", end);
	}
	else if (end == 180)
	{
		printf("�`����%d�A���b�tX�b�W�C\n", end);
	}
	else if (end == 90)
	{
		printf("�`����%d�A���b��Y�b�W�C\n", end);
	}
	else if (end == 270)
	{
		printf("�`����%d�A���b�tY�b�W�C\n", end);
	}
	else if (end >= 1 && end <= 89)
	{
		printf("�`����%d�A���b�Ĥ@�H���C\n", end);
	}
	else if (end >= 91 && end <= 179)
	{
		printf("�`����%d�A���b�ĤG�H���C\n", end);
	}
	else if (end >= 181 && end <= 269)
	{
		printf("�`����%d�A���b�ĤT�H���C\n", end);
	}
	else if (end >= 181 && end <= 269)
	{
		printf("�`����%d�A�b�ĤT�H��\n", end);
	}
	else if (end >= 271 && end <= 359)
	{
		printf("�`����%d�A�b�ĥ|�H��\n", end);
	}
}
