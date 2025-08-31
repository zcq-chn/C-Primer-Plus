//  编写一个程序打印一个表格，每一行打印一个整数、该数的平方、该数的立方。要求用户输入表格的上下限。使用一个for循环。

#include <stdio.h>
int main(void)
{
    int upper_limit, lower_limit;

    printf("Enter lower_limit: ");
    scanf("%d", &lower_limit);
    printf("Enter upper limit: ");
    scanf("%d", &upper_limit);

    for (int num = lower_limit; num <= upper_limit; num++)
    {
        printf("number: %2d, square: %4ld, cube: %6ld\n", num, num * num, num * num * num);
    }

    return 0;
}