//  �޸ĳ����嵥8.8�е�get_first()�������øú������ض�ȡ�ĵ�1���ǿհ��ַ�������һ���򵥵ĳ����в��ԡ�

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