// 請分別輸入A、B、C三個機台的主軸轉速(N)、刀具直徑(D)並算出切削速度(V)，之後找出哪個機台切削速度最快，
// 哪個切削速度最慢。V=(3.14*D*N)/1000 (輸入相關數值由教師指定)。30%
#include <stdio.h>
int main()
{
    int an, ad, bn, bd, cn, cd; // 定義各種機台的轉速N 直徑D 採用abc和要求的變數值做記憶體
    float av, bv, cv;           // 定義abc的v有小數點
    printf("請輸入機台A的主軸轉速 刀具直徑(取整數)\n");
    scanf("%d %d", &an, &ad); // 取的A的轉速、直徑
    printf("請輸入機台B的主軸轉速 刀具直徑(取整數)\n");
    scanf("%d %d", &bn, &bd);
    printf("請輸入機台C的主軸轉速 刀具直徑(取整數)\n");
    scanf("%d %d", &cn, &cd);
    // 計算式
    av = (3.14 * an * ad) / 1000; // 帶入題目提供的運算式
    bv = (3.14 * bn * bd) / 1000;
    cv = (3.14 * cn * cd) / 1000;
    // 判別式
    if (av > bv && bv > cv) // av>bv>cv
    {
        printf("最快為A=%f，最慢為C=%f\n", av, cv); // 輸出A最快和值C最慢和值
    }
    else if (av > cv && cv > bv) // av>cv>bv
    {
        printf("最快為A=%f，最慢為B=%f\n", av, bv); // 輸出A最快和值B最慢和值
    }
    else if (bv > av && av > cv) // bv>av>cv
    {
        printf("最快為B=%f，最慢為C=%f\n", bv, cv); // 輸出B最快和值C最慢和值
    }
    else if (bv > cv && cv > av) // bv>cv>av
    {
        printf("最快為B=%f，最慢為A=%f\n", bv, av); // 輸出B最快和值A最慢和值
    }
    else if (cv > av && av > bv) // cv>av>bv
    {
        printf("最快為C=%f，最慢為B=%f\n", cv, bv); // 輸出C最快和值B最慢和值
    }
    else if (cv > bv && bv > av) // cv>bv>av
    {
        printf("最快為C=%f，最慢為A=%f\n", cv, av); // 輸出C最快和值A最慢和值
    }
}