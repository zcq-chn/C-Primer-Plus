//  ʹ��switch��д��ϰ4��

#include <stdio.h>
int main(void)
{
    int replace = 0;
    char ch;
    printf("Please input a string: ");

    switch (ch = getchar())
    {
    case '.':
        putchar('!');
        replace++;
        break;
    case '!':
        printf("!!");
        replace++;
        break;
    default:
        putchar(ch);
        break;
    }
    
    printf("\nReplace %d times.\n", replace);

    return 0;
}