// 2.某同學去考證照，考試分為學科、術科，請寫一個程式，可輸入學科成績與術科成績(皆由教師指定)
// 其中一科不及格就算失敗(及格分數70分)，並且顯示不及格的科目。

#include <stdio.h>
int main()
{
    int learn, suke;
    printf("請分別輸入學科、術科的成績\n");
    scanf("%d %d", &learn, &suke);
    if (learn >= 70 && suke >= 70)
    {
        printf("學科%d分，術科%d分，恭喜你取得了證照。\n", learn, suke);
    }
    else if (learn < 70)
    {
        printf("學科%d分，術科%d分，因學科不及格，請明年再來。\n", learn, suke);
    }
    else if (suke < 70)
    {
        printf("學科%d分，術科%d分，因術科不及格，請明年再來。\n", learn, suke);
    }
}