//  编写一个程序，提示用于输入名和姓，然后以“名.姓”的格式打印出来。

#include <stdio.h>
int main(void)
{
    char first_name[40];
    char last_name[40];

    printf("请输入名: ");
    scanf("%39s", first_name);
    printf("请输入姓: ");
    scanf("%39s", last_name);

    printf("%s.%s\n", first_name, last_name);

    return 0; 
}