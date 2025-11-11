#include <stdio.h>
int main()
{
    float al, ak, ah, bl, bk, bh;
    printf("請輸入A的長寬高\n");
    scanf("%f%f%f", &al, &ak, &ah);
    printf("請輸入B的長寬高\n");
    scanf("%f%f%f", &bl, &bk, &bh);
    if (al * ak * ah > bl * bk * bh)
    {
        printf("積木A體積=%f立方公尺。積木B的體積=%f立方公尺。積木A較大。", al * ak * ah, bl * bk * bh);
    }
    else if (al * ak * ah < bl * bk * bh)
    {
        printf("積木A體積=%f立方公尺。積木B的體積=%f立方公尺。積木A較小。", al * ak * ah, bl * bk * bh);
    }
}