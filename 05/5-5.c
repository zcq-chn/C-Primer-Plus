/*
    是计算 天里总共赚多少钱的程序（假设第1天赚$1、第2天赚$2、第3天赚$3，以此类推）。修改程序，使其可以与用户交互，根据用户输入的数进行计算（即用读入的一个变量来代替20）。
*/

#include <stdio.h>
int main(void)
{
    int days;
    printf("请输入天数：");
    scanf("%d", &days);
    int sum = 0;
    for (int i = 1; i <= days; i++)
    {
        sum += i;
    }
    printf("%d天里总共赚了%d美元。\n", days, sum);
    return 0;
}
