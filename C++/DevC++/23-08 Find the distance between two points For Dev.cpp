#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2, d;
    printf("�п�J���I�y�ШD�L�̪��Z���A�@�I�@�I��J\n");
    scanf("%f %f", &x1, &y1);
    printf("�Ĥ@�I�y��%f,,%f\n", x1, y1);
    scanf("%f %f", &x2, &y2);
    printf("�ĤG�I�y��%f,,%f\n", x2, y2);
    d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    printf("���I�������Z����%f", d);
}