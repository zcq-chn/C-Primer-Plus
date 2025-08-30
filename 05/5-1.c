/*
    编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时间。
    使用#define和const创建一个表示60的符号常量或const变量。
    通过while循环让用户重复输入值，直到用户输入小于或等于0的值才停止循环。
*/

#include <stdio.h>
#define MINUTES_PER_HOUR 60
int main(voids)
{
    int minutes;
    printf("请输入分钟数（输入小于或等于0的值退出）：\n");
    while (1)
    {
        scanf("%d", &minutes);
        if (minutes <= 0)
        {
            printf("程序结束。\n");
            break;
        }
        int hours = minutes / MINUTES_PER_HOUR;
        int remaining_minutes = minutes % MINUTES_PER_HOUR;
        printf("%d分钟等于%d小时%d分钟。\n", minutes, hours, remaining_minutes);
    }
    return 0;
}
