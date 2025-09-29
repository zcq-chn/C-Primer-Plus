/*
    编写一个函数，从标准输入中读取字符，直到遇到文件结尾。程序要报告每个字符是否是字母。如果是，还要报告该字母在字母表中的数值位置。例如，c和C在字母表中的位置都是3。合并一个函数，以一个字符作为参数，如果该字符是一个字母，则返回一个数值位置，否则返回-1。
*/

#include <stdio.h>
#include <ctype.h>

int alphabet_position(char ch)
{
    if (isalpha(ch))
    {
        return tolower(ch) - 'a' + 1;
    }
    else
    {
        return -1;
    }
}

int main(void)
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (alphabet_position(ch) == -1)
    {
        printf("The character is not a letter.\n");
    }
    else
    {
        printf("The character is a letter and the position in the alphabet is %d.\n", alphabet_position(ch));
    }

    return 0;
}