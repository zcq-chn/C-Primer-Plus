/*
    ��дһ������������EOF֮ǰ����������Ϊ�ַ�����ȡ���ó���Ҫ���������еĴ�д��ĸ��Сд��ĸ�ĸ�����
    �����Сд��ĸ��ֵ�������ġ�����ʹ��ctype.h�����ʺϵķ��ຯ�������㡣
*/

#include <stdio.h>
#include <ctype.h>
#define END '#'

int main(void)
{
    char ch;
    int capital = 0, lowercase = 0;

    printf("Input a sentence(# end): ");
    while ((ch = getchar()) != END)
    {
        if (isupper(ch))
            capital++;
        else if (islower(ch))
            lowercase++;
    }

    printf("You enter %d capital letters and %d lowercase letters.\n", capital, lowercase);
    return 0;
}