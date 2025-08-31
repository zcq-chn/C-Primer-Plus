/*
    编写一个程序，创建两个包含8个元素的double类型数组，使用循环提示用户为第一个数组输入8个值。第二个数组元素的值设置为第一个数组对应元素的累积之和、例如，第二个数组的第4个元素的值是第一个数组前4个元素之和，第二个数组的第5个元素的值是第一个数组前5个元素之和（用嵌套循环可以完成，但是利用第二个数组的第5个元素是第二个数组的第4个元素于第一个数组的第5个元素之和，只用一个循环就能完成认为，不需要使用嵌套循环）。最后，使用循环显示两个数组的内容，第一个数组显示成一行，第二个数组显示在第一个数组的下一行，而且每个元素都与第一个数组各元素相对应。
*/

#include <stdio.h>
int main(void)
{
    double array1[8] = {0}, array2[8] = {0};
    printf("Please input 8 numbers:\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%lf", &array1[i]);
        array2[i] = (i == 0 ? array1[i] : array2[i - 1] + array1[i]);
    }

    printf("array1: ");
    for (int i = 0; i < 8; i++)
    {
        printf("%8g ", array1[i]);
    }
    printf("\n");

    printf("array2: ");
    for (int i = 0; i < 8; i++)
    {
        printf("%8g ", array2[i]);
    }
    printf("\n");

    return 0;
}