/*
    ��дһ��������ʾ�û������д��ĸ��ʹ��Ƕ��ѭ��������������͵ĸ�ʽ��ӡ��ĸ��

            A
           ABA
          ABCBA
         ABCDCBA
        ABCDEDCBA
*/

#include <stdio.h>
int main(void)
{
    char letter;
    int lines;

    printf("Enter a letter: ");
    scanf("%c", &letter);
    printf("Enter lines: ");
    scanf("%d", &lines);

    for (int line = 1; line <= lines; line++)
    {
        for (int space = 1; space <= lines - line; space++)
        {
            putchar(' ');
        }

        for (char output = letter; output <= letter + line - 1; output++)
        {
            putchar(output);
        }

        for (char output = letter + line - 2; output >= letter; output--)
        {
            putchar(output);
        }

        putchar('\n');
    }

    return 0;
}