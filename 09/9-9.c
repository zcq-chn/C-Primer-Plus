//  使用递归函数重写编程练习8。

#include <stdio.h>
#include <math.h>

double power(double x, int n)
{
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

    if (n < 0)
    {
        return 1.0 / power(x, -n);
    }

    if (n > 0)
    {
        return x * power(x, --n);
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