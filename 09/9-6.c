//  编写并测试一个函数，该函数以3个douoble变量的地址作为参数，把最小值放入第1个变量，中间值放入第2个变量，最大值放入第3个变量。

#include <stdio.h>

void min_to_max(double *x, double *y, double *z);

int main(void)
{
    double x, y, z;
    printf("Enter three numbers: ");
    scanf(" %lf %lf %lf", &x, &y, &z);
    min_to_max(&x, &y, &z);
    printf("The numbers in ascending order are %.2f, %.2f, %.2f\n", x, y, z);

    return 0;
}

void min_to_max(double *x, double *y, double *z)
{
    double temp;
    if (*x > *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    if (*x > *z)
    {
        temp = *x;
        *x = *z;
        *z = temp;
    }
    if (*y > *z)
    {
        temp = *y;
        *y = *z;
        *z = temp;
    }
}