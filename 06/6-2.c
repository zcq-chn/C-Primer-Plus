/*
    ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ�ַ���

    $
    $$
    $$$
    $$$$
    $$$$$
*/

#include <stdio.h>
int main(void)
{
    for (int line = 1; line <= 5; line++)
    {
        for (int column = 1; column <= line; column++)
        {
            putchar('$');
        }
        putchar('\n');
    }

    return 0;
}