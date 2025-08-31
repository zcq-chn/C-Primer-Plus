/*
    使用嵌套循环，按下面的格式打印字母：

    A
    BC
    DEF
    GHIJ
    KLMNO
    PQRSTU
*/

#include <stdio.h>
int main(void)
{
    char letter = 'A';
    for (int line = 1; line <= 6; line++)
    {
        for (int column = 1; column <= line; column++)
        {
            putchar(letter++);
        }
        putchar('\n');
    }

    return 0;
}