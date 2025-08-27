//  许多研究表明，微笑益处多多。编写一个程序，生成以下格式的输出：
//  Smile!Smile!Smile!
//  Smile!Smile!
//  Smile!

#include <stdio.h>

void Smile(void)
{
    printf("Smile!");
}

int main(void)
{
    Smile();Smile();Smile();putchar('\n');
    Smile();Smile();putchar('\n');
    Smile();putchar('\n');

    return 0;
}