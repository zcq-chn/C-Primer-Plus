/*
    Chuckie Lucky赢得了100万美元（税后），他把奖金存入年利率8%的账户。在每年的最后一天，Chuckie取出10万美元。
    编写一个程序，计算多少年后Chuckie会取完账户的钱？
*/

#include <stdio.h>
int main(void)
{
    double money = 1000000.0;
    int year = 1;

    for ( ; money > 0; year++)
    {
        money *= 1.08;
        money -= 100000;
    }

    printf("After %d years, Chuckie will take out all the money.\n", year);
    return 0;
}