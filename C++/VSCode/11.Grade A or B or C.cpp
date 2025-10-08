#include <stdio.h>
int main()
{
    int score;
    printf("請輸入成績判斷等第\n"); // 90-100A,60-69D
    scanf("%d", &score);            //%f記錄浮點數 即有小數點的值
    // 判斷式
    if (score >= 90 && score <= 100) // 1
    {
        printf("所輸入成績:%d為A等第\n", score);
    }
    else if (score >= 80 && score <= 89) // 2
    {
        printf("所輸入成績:%d為B等第\n", score);
    }
    else if (score >= 70 && score <= 79) // 3
    {
        printf("所輸入成績:%d為C等第\n", score);
    }
    else if ((score >= 60 && score <= 69)) // 4
    {
        printf("所輸入成績:%d為D等第\n", score);
    }
    else if ((score >= 0 && score <= 59)) // 5
    {
        printf("所輸入成績:%d不及格\n", score);
    }
}