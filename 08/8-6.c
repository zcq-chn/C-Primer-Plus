//  修改程序清单8.8中的get_first()函数，让该函数返回读取的第1个非空白字符，并在一个简单的程序中测试。

#include <stdio.h>
#include <ctype.h>

int get_first(void);

int main(void)
{
    printf("Enter a word: ");
    char ch = get_first();
    printf("The first non-whitespace character is %c.\n", ch);

    return 0;
}

int get_first(void)
{
    char ch;

    do
    {
        ch = getchar();
    } while (isspace(ch));

    while (getchar() != '\n')
        continue;

    return ch;
}