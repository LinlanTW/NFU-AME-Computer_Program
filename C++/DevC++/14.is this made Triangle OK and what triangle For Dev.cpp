#include <stdio.h>
int main()
{
    int aa,bb,cc;//假設cc是斜邊
    printf("請輸入3個邊長判斷是否能構成三角形，若可以再判斷三角形的種類\n");
    scanf("%d %d %d",&aa,&bb,&cc);
    if (aa+bb>cc && bb+cc>aa && cc+aa>bb)//1 巢狀判斷
        {
            printf("所輸入的3個邊長:%d,,%d,,%d可以構成三角形\n",aa,bb,cc);
                if(aa*aa+bb*bb==cc*cc)//1-1
                {
                    printf("直角三角形\n");
                }
                else if(aa*aa+bb*bb<cc*cc)//1-2
                {
                    printf("鈍角三角形\n");
                }
                else if(aa*aa+bb*bb>cc*cc)//1-3
                {
                    printf("銳角三角形\n");
                }
        }
    else//2
        {
            printf("所輸入的3個邊長:%d,,%d,,%無法構成三角形\n",aa,bb,cc);
        }
}