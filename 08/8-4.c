/*
    编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序要报告平均每个单词的字母数。不要把空白统计为单词的字母。实际上，标点符号也不应该统计，但是现在暂时不用考虑这么多（如果你比较在意这点，考虑使用ctype.h系列中的ispunct()函数）。
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