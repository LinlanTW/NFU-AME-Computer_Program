// �мg�@�ӵ{���i��J�T�ӤH���ƾ� �M����ܤT�H�������t��(m/s)
// �åB��ܲĤ@�W�O�֡C
#include <stdio.h>
int main()
{
    int arun, amin, brun, bmin, crun, cmin;
    float asave, bsave, csave;
    printf("�п�JA�P�Ƕ]�������ơA�B�᪺�ɶ�(����)�C\n");
    scanf("%d %d", &arun, &amin);
    printf("�п�JB�P�Ƕ]�������ơA�B�᪺�ɶ�(����)�C\n");
    scanf("%d %d", &brun, &bmin);
    printf("�п�JC�P�Ƕ]�������ơA�B�᪺�ɶ�(����)�C\n");
    scanf("%d %d", &crun, &cmin);
    asave = (arun * 1000.0) / (amin * 60.0);
    bsave = (brun * 1000.0) / (bmin * 60.0);
    csave = (crun * 1000.0) / (cmin * 60.0);
    if (asave > bsave && asave > csave)
    {
        printf("�Ĥ@�W�OA�P�ǡA�L�t�׬O%0.1f m/s\n", asave);
        /*if (bsave > csave)
        {
            printf("�ĤG�W�OB�P�ǡA�L�t�׬O%0.1f m/s\n", bsave);
            printf("�ĤT�W�OC�P�ǡA�L�t�׬O%0.1f m/s\n", csave);
        }
        else if (csave > bsave)
        {
            printf("�ĤG�W�OC�P�ǡA�L�t�׬O%0.1f m/s\n", csave);
            printf("�ĤT�W�OB�P�ǡA�L�t�׬O%0.1f m/s\n", bsave);
        }*/
    }
    else if (bsave > csave && bsave > asave)
    {
        /*printf("�Ĥ@�W�OB�P�ǡA�L�t�׬O%0.1f m/s\n", bsave);
        if (asave > csave)
        {
            printf("�ĤG�W�OA�P�ǡA�L�t�׬O%0.1f m/s\n", asave);
            printf("�ĤT�W�OC�P�ǡA�L�t�׬O%0.1f m/s\n", csave);
        }
        else if (csave > asave)
        {
            printf("�ĤG�W�OC�P�ǡA�L�t�׬O%0.1f m/s\n", csave);
            printf("�ĤT�W�OA�P�ǡA�L�t�׬O%0.1f m/s\n", asave);
        }*/
    }
    else if (csave > asave && csave > bsave)
    {
        printf("�Ĥ@�W�OC�P�ǡA�L�t�׬O%0.1f m/s\n", csave);
        /*if (asave > bsave)
        {
            printf("�ĤG�W�OA�P�ǡA�L�t�׬O%0.1f m/s\n", asave);
            printf("�ĤT�W�OB�P�ǡA�L�t�׬O%0.1f m/s\n", bsave);
        }
        else if (bsave > asave)
        {
            printf("�ĤG�W�OB�P�ǡA�L�t�׬O%0.1f m/s\n", bsave);
            printf("�ĤT�W�OA�P�ǡA�L�t�׬O%0.1f m/s\n", asave);
        }*/
    }
}