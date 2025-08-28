//  ?编写一个程序，要求提示输入一个ASCII码值（如，66）,然后打印输入的字符。

#include <stdio.h>
int main(void)
{
    int character;

    printf("Enter an ASCII number: ");
    scanf("%d", &character);
    printf("%d in ASCII means %c.\n", character, (char)character);

    return 0;
}