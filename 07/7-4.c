/*
    ʹ��if else����дһ�������ȡ���룬����#ֹͣ��
    �ø�̾���滻��ţ���������̾���滻ԭ���ĸ�̾�ţ���󱨸�����˶��ٴ��滻��
*/

#include <stdio.h>
int main(void)
{
    int replace = 0;
    char ch;
    printf("Please input a string: ");
    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            putchar('!');
            replace++;
        }
        else if (ch == '!')
        {
            printf("!!");
            replace++;
        }
        else
        {
            putchar(ch);
        }
    }

    printf("\nReplace %d times.\n", replace);

    return 0;
}
