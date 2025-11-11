#include <stdio.h>
int main()
{
    int a, b, c;
    float x, y, z;
    a = 3.1416; // 浮點數丟給整數會變瘦(即小數點消失只留整數)
    printf("a=%d\n", a);
    printf("a=%-3d\n", a);
    printf("a=%3d\n", a); // 空三格後從最右邊先填 口口口 -> 口口3
    x = 6;                // 整數丟給浮點數變胖(即出現小數點)
    printf("x=%f\n", x);
    printf("x=%0.3f\n", x); // 小數點後三位 -> 6.000
}