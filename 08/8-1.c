//  设计一个程序，统计在读到文件结尾之前读取的字符数。

#include <stdio.h>

int main(void)
{
    char ch;
    int count = 0;

    printf("Input a sentence(# end): ");
    while ((ch = getchar()) != '#')
        count++;

    printf("You enter %d characters.\n", count);

    return 0;

}