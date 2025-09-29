//  设计一个函数min(x,y)，返回两个double类型值的较小值。在一个简单的驱动程序中测试该函数。

#include <stdio.h>

double min(double x, double y);

int main(void)
{
    double x, y;
    printf("Enter two numbers: ");
    scanf(" %lf %lf", &x, &y);
    printf("The minimum of %.2f and %.2f is %.2f\n", x, y, min(x, y));
    return 0;
}

double min(double x, double y)
{
    return x < y ? x : y;
}