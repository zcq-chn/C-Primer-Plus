/*
    1.需要一个把英寸单位转换为厘米单位（1  英寸=2.54  厘米）的程序。
    该程序要提示用户输入英寸值。
    你的任务是定义程序目标和设计程序（编程过程的第1步和第2步）。
*/

#include <stdio.h>
#define INCH_TO_CM 2.54
int main(void)
{
    float input;

    do
    {
        printf("Please enter a number in inch: ");
    } while (scanf("%f", &input) != 1);
    
    printf("%.2f inches are %.2f CM.\n", input, input * INCH_TO_CM);

    return 0;
}