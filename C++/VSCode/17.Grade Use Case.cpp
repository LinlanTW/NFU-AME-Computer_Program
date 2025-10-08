// 結構畫路徑相當類似於if else
// 但必須自訂每個路徑前往的位置否則都會出現預設結果
#include <stdio.h>
int main()
{
    int score;
    printf("請輸入成績判斷等第，使用結構化路徑選擇\n");
    scanf("%d", &score);
    switch (score / 10) // 切換
    {
    case 10: // 100
        printf("所輸入成績:%d為A等第\n", score);
        break; // 中斷
    case 9:    // 90-99
        printf("所輸入成績:%d為A等第\n", score);
        break; // 中斷
    case 8:    // 80-89
        printf("所輸入成績:%d為B等第\n", score);
        break; // 中斷
    case 7:    // 70-79
        printf("所輸入成績:%d為C等第\n", score);
        break; // 中斷
    case 6:    // 60-69
        printf("所輸入成績:%d為D等第\n", score);
        break; // 中斷
    default:   // 以上皆非0-59 又稱 以上案例皆不符合
        printf("所輸入成績:%d不及格\n", score);
        break;
    }
}