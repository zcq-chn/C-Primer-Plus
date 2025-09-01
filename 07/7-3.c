/*
编写一个程序，读取整数直到用户输入0。输入结束后，程序应报告用户输入的偶数（不包括0）个数，这些偶数的平均值、输入的奇数个数及其奇数的平均值。
*/

#include <stdio.h>
int get_number(void);
int main(void)
{
    int num, even_num = 0, odd_num = 0, even_sum = 0, odd_sum = 0;
    while ((num = get_number()) != 0)
    {
        if (num % 2 == 0)
        {
            even_num++;
            even_sum += num;
        }
        else
        {
            odd_num++;
            odd_sum += num;
        }
    }
    printf("even_num: %d, even_average: %d, odd_num: %d, odd_average: %d\n", even_num, even_sum / even_num, odd_num, odd_sum / odd_num);

    return 0;
}

int get_number(void)
{
    int num;

    printf("Please input a number: ");
    scanf("%d", &num);

    return num;
}