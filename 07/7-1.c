//  ��дһ�������ȡ���룬����#�ַ�ֹͣ��Ȼ�󱨸��ȡ�Ŀո��������з��������������ַ���������

#include <stdio.h>
int main(void)
{
    int space = 0, enter = 0, other = 0;
    char ch;

    printf("Please input a string:");
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
        {
            space++;
        }
        else if (ch == '\n')
        {
            enter++;
        }
        else
        {
            other++;
        }
    }

    printf("space: %d, enter: %d, other: %d\n", space, enter, other);

    return 0;
}