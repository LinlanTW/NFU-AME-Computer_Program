#include <stdio.h>
int main()
{
    int kg, hi;
    printf("�Ш̦���J�A������cm�魫kg�Ҧp 160 50 (�u����Ƥp���I����)\n");
    scanf("%d %d", &hi, &kg); //
    if (hi < 180 && kg > 90)  // 1.�����p��180�B�魫�j��90
    {
        printf("�魫�L�F��!\n");
    }
    else // 2.��������180�魫�j�󵥩�90 ���魫�����p��90
    {
        printf("���|�L��!");
    }
}