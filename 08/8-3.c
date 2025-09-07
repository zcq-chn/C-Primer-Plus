/*
    编写一个程序，在遇到EOF之前，把输入作为字符流读取、该程序要报告输入中的大写字母和小写字母的个数。
    假设大小写字母数值是连续的。或者使用ctype.h库中适合的分类函数更方便。
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