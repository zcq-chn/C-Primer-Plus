/**
 * 编写一个to_base_n()函数，该函数接受两个参数，且第二个参数在2~10范围内，然后以第2个参数中指定的进制打印第1个参数的数值。
 * 例如，to_base_n(129, 8)显示的结果为201，也就是129的八进制。在一个完整的程序中测试该函数。
 */

#include <stdio.h>

void to_base_n(int number, int base)
{
    int remainder;
    
    remainder = number % base;
    if (number >= base)
    {
        to_base_n(number / base, base);
    }

    printf("%d", remainder);
}

int main(void)
{
    int number, base;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("Enter base (2-10): ");
    scanf("%d", &base);

    while (base < 2 || base > 10)
    {
        printf("Invalid base! Please enter a base between 2 and 10: ");
        scanf("%d", &base);
    }
    
    printf("The number %d in base %d is: ", number, base);
    to_base_n(number, base);
    printf("\n");
    return 0;
}