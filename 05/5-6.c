/*
    修改编程练习5（习题5.5）的程序，使其能计算整数的平方和（可以认为第1天赚$1、第2天赚$4、第3天赚$9，以此类推，这看起来很不错）。C没有平方函数，但是可以用n * n来表示n的平方。
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
        sum += i * i;
    }
    printf("%d天里总共赚了%d美元。\n", days, sum);
    return 0;
}