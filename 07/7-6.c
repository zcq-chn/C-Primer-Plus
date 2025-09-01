/*
    编写程序读取输入，读到#停止，报告ei出现的次数。
    注意：该程序要记录前一个字符和当前字符，用"Receive your eieio award"这样的输入来测试。
*/

#include <stdio.h>
int main(void)
{
    int count;
    char prior, curent;
    count = 0;
    prior = '\0';

    printf("Please input a string: ");
    while ((curent = getchar()) != '#')
    {
        if (prior == 'e' && curent == 'i')
            count++;
            
        prior = curent;
    }

    printf("The number of 'ei' appears is %d\n", count);
    return 0;
}