// 1-20瓶 每瓶2公升
// 21-30瓶 每瓶1.5公升
// 31瓶以上 每瓶1公升
#include <stdio.h>
int main()
{
    // 為避免在 C++ 中用 % 對浮點數取餘數造成錯誤，改用整數毫升單位處理
    // 輸入的 juice 單位仍以公升輸入，但內部轉為毫升(int)處理
    int bottle;
    int juice_ml; // 果汁總量，單位：毫升
    int tmp01, tmp02; // tmp01 可以裝幾瓶, tmp02 剩餘果汁(毫升)
    double juice_input;
    printf("請輸入準備的果汁總量(公升)和預計裝瓶數\n");
    scanf("%lf %d", &juice_input, &bottle);
    juice_ml = (int)(juice_input * 1000 + 0.5); // 四捨五入到整數毫升
    if (bottle <= 20)
    {
        // 每瓶 2 公升 = 2000 毫升
        tmp01 = juice_ml / 2000;                 // 可以裝幾瓶
        tmp02 = juice_ml % 2000;                 // 剩餘毫升
        if (tmp01 == bottle)
        {
            printf("果汁總量剛好!\n");
        }
        else if (tmp01 > bottle)
        {
            // 把剩餘毫升轉回公升顯示
            printf("果汁總量足夠,剩餘果汁:%.3f公升\n", tmp02 / 1000.0);
        }
        else
        {
            int need_ml = 2000 * bottle - juice_ml;
            printf("果汁總量不足，需再補充%.3f公升果汁量\n", need_ml / 1000.0);
        }
    }
    if (bottle >= 21 && bottle <= 30)
    {
        // 每瓶 1.5 公升 = 1500 毫升
        tmp01 = juice_ml / 1500;                 // 可以裝幾瓶
        tmp02 = juice_ml % 1500;                 // 剩餘毫升
        if (tmp01 == bottle)
        {
            printf("果汁總量剛好!\n");
        }
        else if (tmp01 > bottle)
        {
            // 顯示剩餘果汁(公升)
            printf("果汁總量足夠,剩餘果汁:%.3f公升\n", tmp02 / 1000.0);
        }
        else
        {
            int need_ml = 1500 * bottle - juice_ml;
            printf("果汁總量不足，需再補充%.3f公升果汁量\n", need_ml / 1000.0);
        }
    }
    if (bottle > 30)
    {
        // 每瓶 1 公升 = 1000 毫升
        tmp01 = juice_ml / 1000;           // 可以裝幾瓶
        tmp02 = juice_ml % 1000;           // 剩餘毫升
        if (tmp01 == bottle)
        {
            printf("果汁總量剛好!\n");
        }
        else if (tmp01 > bottle)
        {
            // 顯示剩餘果汁(公升)
            printf("果汁總量足夠,剩餘果汁:%.3f公升\n", tmp02 / 1000.0);
        }
        else
        {
            int need_ml = 1000 * bottle - juice_ml;
            printf("果汁總量不足，需再補充%.3f公升果汁量\n", need_ml / 1000.0);
        }
    }
    
}
