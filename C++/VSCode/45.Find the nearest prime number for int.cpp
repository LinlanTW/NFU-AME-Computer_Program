#include <stdio.h>
int main()
{
    int pp, i, num, count = 0;
    printf("請輸入一個整數找到最接近的質數:");
    scanf("%d", &num);
    for (pp = num; pp >= 1; pp--) // 直接從接近數開始減 for (將pp設為跟num相同值 ; 在檢查因數時不會有小於1的狀況 ; 每次迴圈pp-1)
    {
        count = 0;                // 將每次未達成的垃圾丟掉 即count歸0
        for (i = 1; i <= pp; i++) // pp 1 2 3 .....pp 然後i不會超過pp / for(將i等於1，從1開始找因數 ; i不會超過pp不然沒意義 ; 每次迴圈i+1)
        {                         // 內迴圈
            if (pp % i == 0)      // 判斷pp是否為num的因數 即pp能不能被i整除
            {
                count++; // count=count+1
            } // 判斷式如果成立 count就加1
        } // 內迴圈結束
        if (count == 2 || count == 1) // 檢查count是否等於2 如果>2則有2個因數以上 不是質數 如果=1即考慮1和2也是質數
        {
            printf("最接近且小於 %d 的質數是 %d \n", num, pp);
            break; // 找到第一個質數後跳出迴圈
        }
    }
}