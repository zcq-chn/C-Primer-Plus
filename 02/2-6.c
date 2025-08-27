//  编写一个程序，创建一个整型变量toes，并将toes设置为10。
//  程序中还要计算toes的两倍和toes的平方。该程序应打印3个值，并分别描述以示区分。

#include <stdio.h>
int main(void)
{
    int toes, twofold_toes, square_toes;
    toes = 10;

    twofold_toes = toes * 2;
    square_toes = toes * toes;

    printf("toes = %d\n", toes);
    printf("twofold toes = %d\n", twofold_toes);
    printf("square two = %d\n", square_toes);

    return 0;
}