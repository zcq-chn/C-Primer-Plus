/*
    编写一个程序，提示用户输入一个身高（单位：厘米），并分别以厘米和英尺、英寸为单位显示该值，允许有小数部分。程序应该能让用户重复输入身高，直到用户输入一个非正值。其输出示例如下：
    Enter a height in centimeters:182
    182.0 cm = 5 feet, 11.7 inches
    Enter a height in centimeters (<=0 to quit):168.7
    168.7 cm = 5 feet, 6.4 inches
    Enter a height in centimeters (<=0 to quit):0
    bye
*/

#include <stdio.h>
#define CM_PER_FOOT 30.48
#define CM_PER_INCH 2.54
#define INCHES_PER_FOOT 12

int main(void)
{
    float height;
    printf("请输入一个身高（单位：厘米）：");
    while (scanf("%f", &height) == 1 && height > 0)
    {
        float feet = height / CM_PER_FOOT;
        float inches = height / CM_PER_INCH - INCHES_PER_FOOT * (int)feet;
        printf("%.1f cm = %d feet, %.1f inches\n", height, (int)feet, inches);
        printf("请输入一个身高（单位：厘米）（输入小于或等于0的值退出）：");
    }
    printf("bye\n");
    return 0;
}
