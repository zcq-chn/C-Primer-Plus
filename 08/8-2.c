/*
    ��дһ������������EOF֮ǰ����������Ϊ�ַ�����ȡ������Ҫ��ӡÿ��������ַ�������Ӧ��ASCIIʮ����ֵ��ע�⣬��ASCII�����ܣ��ո��ַ�ǰ����ַ����ǷǴ�ӡ�ַ���Ҫ���⴦����Щ�ַ�������Ǵ�ӡ�ַ��ǻ��з����Ʊ������ֱ��ӡ\n��\t������ʹ�ÿ����ַ���ʾ�������磬ASCII��1��Ctrl+A������ʾΪ^A��ע�⣬A��ASCIIֵ��Ctrl+A��ֵ����64�������Ǵ�ӡ�ַ�Ҳ�����ƵĹ�ϵ����ÿ���������з���ӡ�µ�һ��֮�⣬ÿ�д�ӡ10��ֵ����ע�⣺��ͬ�Ĳ���ϵͳ������ַ����ܲ�ͬ����
*/

#include <stdio.h>
#define END '#'

int main(void)
{
    char ch;
    int count = 0;

    printf("Input a sentence(# end): ");
    while ((ch = getchar()) != END)
    {
        if (++count % 10 == 0)
            putchar('\n');

        if (ch == '\n')
            printf("\\n - %03d", ch);
        else if (ch == '\t')
            printf("\\t - %03d", ch);
        else if (ch > ' ')
            printf("%c - %d", ch, ch);
        else
            printf("^%c - %03d", ch, ch + 64);
    }

    return 0;
}