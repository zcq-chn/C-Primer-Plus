//  编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数乘积的结果。在用户输入非数字之前，程序应循环处理用户输入的每对值。

#include <stdio.h>
int main(void)
{
    float one, two;
    printf("Enter two float numbers: ");
    while(scanf("%f %f", &one, &two) == 2)
    {
        printf("(%g - %g) / (%g * %g) = %g.\n", one, two, one, two, (one - two) / (one * two));
        printf("Enter two float numbers: ");
    }
    printf("Done!\n");

    return 0;
}