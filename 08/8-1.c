//  ���һ������ͳ���ڶ����ļ���β֮ǰ��ȡ���ַ�����

#include <stdio.h>

int main(void)
{
    char ch;
    int count = 0;

    printf("Input a sentence(# end): ");
    while ((ch = getchar()) != '#')
        count++;

    printf("You enter %d characters.\n", count);

    return 0;

}