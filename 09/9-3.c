//  编写一个函数，接受3个参数：一个字符和两个整数。
//  字符参数是待打印的字符，第1个整数指定一行中打印字符的次数，第2个整数打印制定字符的行数。
//  编写一个调用该函数的程序。

#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
    char ch;
    int i, j;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("Enter the number of times to print the character: ");
    scanf(" %d", &i);
    printf("Enter the number of rows: ");
    scanf(" %d", &j);

    chline(ch, i, j);

    return 0;
}

void chline(char ch, int i, int j)
{
    for (int k = 0; k < j; k++)
    {
        for (int l = 0; l < i; l++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}