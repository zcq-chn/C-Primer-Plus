//  设计一个函数chline(ch, i, j)，打印指定的字符j行i列。在一个简单的驱动程序中测试该函数。

#include <stdio.h>

void chline(char ch, int j, int i);

int main(void)
{
    char ch;
    int j, i;
    printf("Enter a cahracter: ");
    scanf(" %c", &ch);
    printf("Enter the number of rows and columns: ");
    scanf(" %d %d", &j, &i);

    chline(ch, j, i);

    return 0;
}

void chline(char ch, int j, int i)
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