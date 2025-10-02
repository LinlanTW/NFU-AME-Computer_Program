// 肈ヘ箇砞
// –4Ω秥
// –100ぃ秥
// –400秥
#include <stdio.h>
int main()
{
    int year; // 安砞cc琌弊娩
    printf("叫块﹁瑅耞秥┪キ\n");
    scanf("%d", &year);
    if (year % 4 == 0) // 1 盻耞 耞Year/4緇计单ぃ单0 狦单0秈盻耞 狦ぃ单0钡else
    {
        if (year % 100 != 0) // 1-1 秈盻耞 狦Year/100 緇计ぃ单0 玥秥
        {
            printf("┮块﹁瑅:%d琌秥\n", year);
        }
        else if (year % 100 == 0 && year % 400 == 0) // 1-2 秈盻耞 狦Year/100 緇计单0  Year/400单0 玥秥
        {
            printf("┮块﹁瑅:%d琌秥\n", year);
        }
        else
        {
            printf("┮块﹁瑅:%dぃ琌秥\n", year);
        }
    }
    else // 2
    {
        printf("┮块﹁瑅:%dぃ琌秥\n", year);
    }
}