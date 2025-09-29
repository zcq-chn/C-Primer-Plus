/**
 * 第6章的程序清单6.20中，power()函数返回一个double类型数的正整数次幂。
 * 改进该函数，使其能正确计算负幂。
 * 另外，函数要处理0的任何次幂都为0，任何数的0次幂都是1（函数应报告0的0次幂未定义，因此把该值处理为1）。
 * 要使用一个循环，并在程序中测试该函数。
 */

#include <stdio.h>
#include <math.h>

double power(double x, int n)
{
    double result = 1.0;

    if (x == 0)
    {
        if (n == 0)
        {
            printf("0 to the power of 0 is undefined, so set it as 1.\n");
            return 1.0;
        }
        return 0.0;
    }

    if (n == 0)
    {
        return 1.0;
    }

    for (int i = 0; i < fabs(n); i++)
    {
        result *= x;
    }

    
}

int main(void)
{
    double x;
    int n;

    printf("Enter a number and an integer power: ");
    scanf("%lf %d", &x, &n);
    
    printf("%.2f to the power of %d is %.2f\n", x, n, power(x, n));

    return 0;
}