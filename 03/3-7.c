//  1英寸相当于2.54厘米。编写一个程序，提示用户输入身高（/英寸），然后以厘米为单位显示身高。

#include <stdio.h>
#define INCH_CM 2.54
int main(void)
{
    double height_inch, height_cm;
    printf("请输入您的身高（英寸）：");
    scanf("%lf", &height_inch);
    height_cm = height_inch * INCH_CM;
    printf("您的身高为：%g 厘米。\n", height_cm);
    return 0;
}