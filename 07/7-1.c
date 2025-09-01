//  编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、换行符数和所有其他字符的数量。

#include <stdio.h>
int main(void)
{
    int space = 0, enter = 0, other = 0;
    char ch;

    printf("Please input a string:");
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
        {
            space++;
        }
        else if (ch == '\n')
        {
            enter++;
        }
        else
        {
            other++;
        }
    }

    printf("space: %d, enter: %d, other: %d\n", space, enter, other);

    return 0;
}