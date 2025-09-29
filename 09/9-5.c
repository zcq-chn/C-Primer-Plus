//  编写并测试一个函数larger_of()，该函数把两个double类型变量的值替换为较大的值。例如，larger_of(x, y)会把x和y中较大的值重新赋值给两个变量。

#include <stdio.h>

double larger_of(double *x, double *y);

int main(void)
{
    double x, y;
    printf("Enter two numbers: ");
    scanf(" %lf %lf", &x, &y);
    printf("The larger of %.2f and %.2f is %.2f\n", x, y, larger_of(&x, &y));
    return 0;
}

double larger_of(double *x, double *y)
{
    double max = *x > *y ? *x : *y;
    *x = *y = max;

    return max;
}