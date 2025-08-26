//  编写一个程序把你的年龄转换成天数，并显示这两个值。这里不用考虑闰年的问题。

#include <stdio.h>
#define YEAR_TO_DAY 365

int main(void)
{
    int age;
    do
    {
        printf("Enter your age: ");
    } while (scanf("%d", &age) != 1 || age < 0);
    
    printf("The age of %d years is %ld days.\n", age, (long)age * YEAR_TO_DAY);

    return 0;
}