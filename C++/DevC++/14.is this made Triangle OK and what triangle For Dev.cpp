#include <stdio.h>
int main()
{
    int aa,bb,cc;//���]cc�O����
    printf("�п�J3������P�_�O�_��c���T���ΡA�Y�i�H�A�P�_�T���Ϊ�����\n");
    scanf("%d %d %d",&aa,&bb,&cc);
    if (aa+bb>cc && bb+cc>aa && cc+aa>bb)//1 �_���P�_
        {
            printf("�ҿ�J��3�����:%d,,%d,,%d�i�H�c���T����\n",aa,bb,cc);
                if(aa*aa+bb*bb==cc*cc)//1-1
                {
                    printf("�����T����\n");
                }
                else if(aa*aa+bb*bb<cc*cc)//1-2
                {
                    printf("�w���T����\n");
                }
                else if(aa*aa+bb*bb>cc*cc)//1-3
                {
                    printf("�U���T����\n");
                }
        }
    else//2
        {
            printf("�ҿ�J��3�����:%d,,%d,,%�L�k�c���T����\n",aa,bb,cc);
        }
}