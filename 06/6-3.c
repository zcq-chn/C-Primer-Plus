/*
    ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ��ĸ��

    F
    FE
    FED
    FEDC
    FEDCB
    FEDCBA
*/

#include <stdio.h>
int main(void)
{
    for (int line = 1; line <= 6; line++)
    {
        for (int column = 1; column <= line; column++)
        {
            putchar('F' - column + 1);
        }
        putchar('\n');
    }

    return 0;
}