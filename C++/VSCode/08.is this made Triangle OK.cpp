#include <stdio.h>
int main()
{
    int a, b, c;
    printf("輸入三角形的三個邊長，是否可以構成三角形(只取整數小數點忽略)\n");
    scanf("%d %d %d", &a, &b, &c);           //
    if (a + b > c && b + c > a && c + a > b) // 1.要a+b大於c b+c大於a c+a大於b 三項都要達成才可通過
    {
        printf("所輸入的三個邊長:%d,%d,%d，可以做成三角形!\n", a, b, c);
    }
    else // 2.以上有任何一項不達成則不可做成
    {
        printf("所輸入的三個邊長:%d,%d,%d，不可做成三角形!", a, b, c);
    }
}