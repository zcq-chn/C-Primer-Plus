/*
编写一个程序读取输入，读到#字符停止。程序要打印每个输入的字符以及对应的ASCII码（十进制）。每行打印8个”字符-ASCII码“组合。建议：使用字符计数和求模运算符%在每8个循环周期时打印一个换行符。
*/

#include <stdio.h>
int main(void)
{
    printf("Please input a string: ");

    for (int i = 0, count = 0; (i = getchar()) != '#'; count++)
    {
        if (count % 8 == 0)
        {
            printf("\n");
        }
        printf("%c - %3d ", i, i);
    }

    return 0;
}