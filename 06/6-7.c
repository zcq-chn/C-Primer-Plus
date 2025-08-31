//  编写一个程序把一个单词读入一个字符数组中，然后倒序打印这个单词。
//  提示：strlen()函数（第4章介绍过）可用于计算数组最后一个字符的下标。

#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[20];

    printf("Enter a wrod: ");
    scanf("%s", word);
    
    for (int i = strlen(word) - 1; i >= 0; i--)
    {
        putchar(word[i]);
    }

    return 0;
}