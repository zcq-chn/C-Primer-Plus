/*
    使用if else语句编写一个程序读取输入，读到#停止。
    用感叹号替换句号，用两个感叹号替换原来的感叹号，最后报告进行了多少次替换。
*/

#include <stdio.h>
int main(void)
{
    int replace = 0;
    char ch;
    printf("Please input a string: ");
    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            putchar('!');
            replace++;
        }
        else if (ch == '!')
        {
            printf("!!");
            replace++;
        }
        else
        {
            putchar(ch);
        }
    }

    printf("\nReplace %d times.\n", replace);

    return 0;
}
