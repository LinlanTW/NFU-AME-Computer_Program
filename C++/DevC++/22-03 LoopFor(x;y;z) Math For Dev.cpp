// �Q��for�j�� �p��1+1/2+1/3+......+1/n
#include <stdio.h>
int main()
{
    int n;
    float pp, sum = 0;
    printf("��Jn����\n");
    scanf("%d", &n);
    for (pp = 1; pp <= n; pp = pp + 1)
    {
        sum = sum + 1 / pp;
    }
    printf("1+1/2+1/3+......+1/n����:%f\n", sum);
}