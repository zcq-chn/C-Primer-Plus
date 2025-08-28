//  一年大约有3.156 * 10^7秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。

#include <stdio.h>
#define YEAR_TO_SECONDS 3.156e7

int main(void)
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your seconds corresponding to ypur age is %e.\n", age * YEAR_TO_SECONDS);

    return 0;
}