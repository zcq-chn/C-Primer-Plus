/*
    ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ��ĸ��

    A
    BC
    DEF
    GHIJ
    KLMNO
    PQRSTU
*/

#include <stdio.h>
int main(void)
{
    char letter = 'A';
    for (int line = 1; line <= 6; line++)
    {
        for (int column = 1; column <= line; column++)
        {
            putchar(letter++);
        }
        putchar('\n');
    }

    return 0;
}