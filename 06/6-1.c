//  ��дһ�����򣬴���һ������26��Ԫ�ص����飬�������д洢26��Сд��ĸ��Ȼ���ӡ������������ݡ�

#include <stdio.h>
int main(void)
{
    char a[26];

    for (int i = 0; i < 26; i++)
    {
        a[i] = 'a' + i;
    }

    for (int i = 0; i < 26; i++)
    {
        putchar(a[i]);
    }

    return 0;
}