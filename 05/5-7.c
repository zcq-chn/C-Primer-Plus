/*
    编写一个程序，提示用户输入一个double类型的数，并打印该数的立方值。
    自己设计一个函数计算并打印立方值。main()函数要把用户输入的值传递给函数。
*/

#include <stdio.h>

double cube(double);

int main(void)
{
    double num;
    printf("请输入一个数：");
    scanf("%lf", &num);
    printf("该数的立方值是：%g\n", cube(num));
    return 0;
}

double cube(double x)
{
    return x * x * x;
}
