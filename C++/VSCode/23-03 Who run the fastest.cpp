// 請寫一個程式可輸入三個人的數據 然後顯示三人的平均速度(m/s)
// 並且顯示第一名是誰。
#include <stdio.h>
int main()
{
    int arun, amin, brun, bmin, crun, cmin;
    float asave, bsave, csave;
    printf("請輸入A同學跑的公里數，且花的時間(分鐘)。\n");
    scanf("%d %d", &arun, &amin);
    printf("請輸入B同學跑的公里數，且花的時間(分鐘)。\n");
    scanf("%d %d", &brun, &bmin);
    printf("請輸入C同學跑的公里數，且花的時間(分鐘)。\n");
    scanf("%d %d", &crun, &cmin);
    asave = (arun * 1000.0) / (amin * 60.0);
    bsave = (brun * 1000.0) / (bmin * 60.0);
    csave = (crun * 1000.0) / (cmin * 60.0);
    if (asave > bsave && asave > csave)
    {
        printf("第一名是A同學，他速度是%0.1f m/s\n", asave);
        /*if (bsave > csave)
        {
            printf("第二名是B同學，他速度是%0.1f m/s\n", bsave);
            printf("第三名是C同學，他速度是%0.1f m/s\n", csave);
        }
        else if (csave > bsave)
        {
            printf("第二名是C同學，他速度是%0.1f m/s\n", csave);
            printf("第三名是B同學，他速度是%0.1f m/s\n", bsave);
        }*/
    }
    else if (bsave > csave && bsave > asave)
    {
        /*printf("第一名是B同學，他速度是%0.1f m/s\n", bsave);
        if (asave > csave)
        {
            printf("第二名是A同學，他速度是%0.1f m/s\n", asave);
            printf("第三名是C同學，他速度是%0.1f m/s\n", csave);
        }
        else if (csave > asave)
        {
            printf("第二名是C同學，他速度是%0.1f m/s\n", csave);
            printf("第三名是A同學，他速度是%0.1f m/s\n", asave);
        }*/
    }
    else if (csave > asave && csave > bsave)
    {
        printf("第一名是C同學，他速度是%0.1f m/s\n", csave);
        /*if (asave > bsave)
        {
            printf("第二名是A同學，他速度是%0.1f m/s\n", asave);
            printf("第三名是B同學，他速度是%0.1f m/s\n", bsave);
        }
        else if (bsave > asave)
        {
            printf("第二名是B同學，他速度是%0.1f m/s\n", bsave);
            printf("第三名是A同學，他速度是%0.1f m/s\n", asave);
        }*/
    }
}