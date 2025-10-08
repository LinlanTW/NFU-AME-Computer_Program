#include <stdio.h>
int main()
{
    int aa, bb, cc, n = 0;
girl:
    n = n + 1;
    printf("請輸入3個整數做排序\n");
    scanf("%d %d %d", &aa, &bb, &cc);
    if (aa > bb && aa > cc) // 1 aa>bb aa>cc 兩個等式都要正確才進入巢狀判斷
    {
        if (bb > cc) // 1.1 巢狀迴圈 bb>cc
        {
            printf("由大到小的順序為:%d>%d>%d\n", aa, bb, cc);
        }
        else // 1.2 巢狀迴圈 cc>bb
        {
            printf("由大到小的順序為:%d>%d>%d\n", aa, cc, bb);
        }
    }
    else if (bb > cc && bb > aa) // 2 bb>cc bb>aa 兩個等式都要正確才進入巢狀判斷
    {
        if (cc > aa) // 2.1 cc>aa
        {
            printf("由大到小的順序為:%d>%d>%d\n", bb, cc, aa);
        }
        else // 2.2 aa>cc
        {
            printf("由大到小的順序為:%d>%d>%d\n", bb, aa, cc);
        }
    }
    else if (cc > aa && cc > bb) // 3 cc>aa cc>bb 兩個等式都要正確才進入巢狀判斷
    {
        if (aa > bb) // 3.1 aa>bb
        {
            printf("由大到小的順序為:%d>%d>%d\n", cc, aa, bb);
        }
        else // 3.2 bb>aa
        {
            printf("由大到小的順序為:%d>%d>%d\n", cc, bb, aa);
        }
    }
    if (n == 3) // 程式結束
    {
        return 0;
    }
    goto girl;
}