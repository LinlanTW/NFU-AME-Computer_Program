#include <stdio.h>
int main()
{
    int aa, bb, cc, n = 0;
girl:
    n = n + 1;
    printf("�п�J3�Ӿ�ư��Ƨ�\n");
    scanf("%d %d %d", &aa, &bb, &cc);
    if (aa > bb && aa > cc) // 1 aa>bb aa>cc ��ӵ������n���T�~�i�J�_���P�_
    {
        if (bb > cc) // 1.1 �_���j�� bb>cc
        {
            printf("�Ѥj��p�����Ǭ�:%d>%d>%d\n", aa, bb, cc);
        }
        else // 1.2 �_���j�� cc>bb
        {
            printf("�Ѥj��p�����Ǭ�:%d>%d>%d\n", aa, cc, bb);
        }
    }
    else if (bb > cc && bb > aa) // 2 bb>cc bb>aa ��ӵ������n���T�~�i�J�_���P�_
    {
        if (cc > aa) // 2.1 cc>aa
        {
            printf("�Ѥj��p�����Ǭ�:%d>%d>%d\n", bb, cc, aa);
        }
        else // 2.2 aa>cc
        {
            printf("�Ѥj��p�����Ǭ�:%d>%d>%d\n", bb, aa, cc);
        }
    }
    else if (cc > aa && cc > bb) // 3 cc>aa cc>bb ��ӵ������n���T�~�i�J�_���P�_
    {
        if (aa > bb) // 3.1 aa>bb
        {
            printf("�Ѥj��p�����Ǭ�:%d>%d>%d\n", cc, aa, bb);
        }
        else // 3.2 bb>aa
        {
            printf("�Ѥj��p�����Ǭ�:%d>%d>%d\n", cc, bb, aa);
        }
    }
    if (n == 3) // �{������
    {
        return 0;
    }
    goto girl;
}