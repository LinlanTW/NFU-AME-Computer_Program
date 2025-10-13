// 1.輸入一個程式，可計算卡路里，請分別計算早、中、晚的卡路里量(由教師指定)
// 計算卡路里的總量，然後選擇下列運動項目，最後計算消耗卡路里量的時間。
// 游泳30分鐘消耗518卡
// 跑步60分鐘消耗352卡
#include <stdio.h>
int main()
{
    // swim 30min 518ca
    // run 60min 352ca
    int mor, lun, dinn, all;
    float swim, run;
    printf("請輸入早餐吃了多少卡路里\n");
    scanf("%d", &mor);
    printf("請輸入中餐吃了多少卡路里\n");
    scanf("%d", &lun);
    printf("請輸入晚餐吃了多少卡路里\n");
    scanf("%d", &dinn);
    all = mor + lun + dinn;
    swim = all / 518.0 * 30.0;
    run = all / 352.0 * 60.0;
    printf("早餐吃了%d卡、中餐吃了%d卡、晚餐吃了%d卡，所以卡路里量=%d+%d+%d=%d卡，游泳需要花%0.2f分鐘、跑步需要花%0.2f分鐘。\n", mor, lun, dinn, mor, lun, dinn, all, swim, run);
}