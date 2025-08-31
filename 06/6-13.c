/*
    编写一个程序，创建一个包含8个元素的int类型数组，分别把数组元素设置为2的前8次幂。使用for循环设置数组元素的值，使用do while循环显示数组元素的值。
*/

#include <stdio.h>
int main(void)
{
    int num[8];
    int value = 1;
    int i = 0;

    for (int index = i; index < 8; index++)
    {
        value *= 2;
        num[index] = value;
    }

    do
    {
        printf("%d ", num[i]);
        i++;
    } while (i < 8);
    
    return 0;
}