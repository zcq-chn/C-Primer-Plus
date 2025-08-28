/*
    1品脱=2杯 1杯=8盎司 1盎司=2大汤勺 1大汤勺=3茶勺 
    提示用户输入杯数 并以品脱、盎司、汤勺、茶勺为单位显示等价容量。
*/

#include <stdio.h>

#define CUPS_PER_PINT 2
#define OUNCES_PER_CUP 8
#define TABLESPOONS_PER_OUNCE 2
#define TEASPOONS_PER_TABLESPOON 3

int main(void)
{
    float cups;
    printf("请输入杯数：");
    scanf("%f", &cups);

    float pints = cups / CUPS_PER_PINT;
    float ounces = cups * OUNCES_PER_CUP;
    float tablespoons = ounces * TABLESPOONS_PER_OUNCE;
    float teaspoons = tablespoons * TEASPOONS_PER_TABLESPOON;

    printf("%g 杯等于：\n", cups);
    printf("%g 品脱\n", pints);
    printf("%g 盎司\n", ounces);
    printf("%g 大汤勺\n", tablespoons);
    printf("%g 茶勺\n", teaspoons);

    return 0;
}

