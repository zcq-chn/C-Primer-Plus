/*
    使用嵌套循环，按下面的格式打印字符：

    $
    $$
    $$$
    $$$$
    $$$$$
*/

#include <stdio.h>
int main(void)
{
    for (int line = 1; line <= 5; line++)
    {
        for (int column = 1; column <= line; column++)
        {
            putchar('$');
        }
        putchar('\n');
    }

    return 0;
}