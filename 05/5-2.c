/*
    2.编写一个程序，提示用户输入一个整数，然后打印从该数到比该数大10的所有整数（例如，用户输入5，则打印5～15的所有整数，包括5和15）。要求打印的各值之间用一个空格、制表符或换行符分开。
*/
#include <stdio.h>
int main(void)
{
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);
    printf("从%d到%d的所有整数：\n", num, num + 10);
    for (int i = num; i <= num + 10; i++)
    {
        printf("%d", i);    putchar('\n');
    }
    printf("\n");
    return 0;
}
