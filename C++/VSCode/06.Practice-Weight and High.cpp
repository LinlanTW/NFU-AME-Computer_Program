#include <stdio.h>
int main()
{
    int kg, hi;
    printf("請依次輸入你的身高cm體重kg例如 160 50 (只取整數小數點忽略)\n");
    scanf("%d %d", &hi, &kg); //
    if (hi < 180 && kg > 90)  // 1.身高小於180且體重大於90
    {
        printf("體重過了喔!\n");
    }
    else // 2.身高高於180體重大於等於90 或體重直接小於90
    {
        printf("不會過重!");
    }
}