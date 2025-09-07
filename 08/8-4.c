/*
    ��дһ������������EOF֮ǰ����������Ϊ�ַ�����ȡ���ó���Ҫ����ƽ��ÿ�����ʵ���ĸ������Ҫ�ѿհ�ͳ��Ϊ���ʵ���ĸ��ʵ���ϣ�������Ҳ��Ӧ��ͳ�ƣ�����������ʱ���ÿ�����ô�ࣨ�����Ƚ�������㣬����ʹ��ctype.hϵ���е�ispunct()��������
*/

#include <stdio.h>
#include <ctype.h>

#define END '#'

int main(void)
{
    char ch;
    int count = 0, word = 0, letter = 0, inword = 0;

    printf("Input a sentence(# end): ");
    while ((ch = getchar()) != END)
    {
        if (isalpha(ch))
        {
            letter++;
            if (inword == 0)
            {
                inword = 1;
                word++;
            }
        }
        else
        {
            if (inword == 1)
            {
                count++;
                inword = 0;
            }
        }
    }

    printf("You enter %d words and %d letters.\n", word, letter);
    printf("The average number of letters per word is %.1f.\n", (float)letter / word);

    return 0;
}