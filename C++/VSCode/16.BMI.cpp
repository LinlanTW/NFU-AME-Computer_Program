#include <stdio.h>
int main()
{
    int h, w;
    float bmi;
    printf("請輸入身高:公分，體重:公斤，計算BMI判斷過輕、正常及過重(僅計算整數值)\n");
    scanf("%d %d", &h, &w);
    bmi = w / ((h / 100.0) * (h / 100.0)); // 特別 如果h,w一開始設定為int一般整數運算子
                                           //   但如果在計算時 假如 值/100 -> 值/100.0
                                           //       會強制變為浮點計算值
    if (bmi <= 18.5)
    {
        printf("你的BMI=%f，過輕了哦!", bmi);
    }
    else if (bmi >= 24) // 2
    {
        printf("你的BMI=%f，過重了哦!", bmi);
    }
    else
    {
        printf("你的BMI=%f，剛剛好!", bmi);
    }
}