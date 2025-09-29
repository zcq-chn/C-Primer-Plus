/*
    两数的调和平均数这样计算：先得到两数的倒数，然后计算两个倒数的平均值，最后取计算结果的倒数。
    编写一个函数，接受两个double类型的参数，返回这两个参数的调和平均数。
*/

#include <stdio.h>

double harmonic_mean(double x, double y);

int main(void)
{
    double x, y;
    printf("Enter two numbers: ");
    scanf(" %lf %lf", &x, &y);
    printf("The harmonic mean of %.2f and %.2f is %.2f\n", x, y, harmonic_mean(x, y));
    return 0;
}

double harmonic_mean(double x, double y)
{
    return 1.0 / ((1.0 / x + 1.0 / y) / 2.0);
}