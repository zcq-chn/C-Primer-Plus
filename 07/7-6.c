/*
    ��д�����ȡ���룬����#ֹͣ������ei���ֵĴ�����
    ע�⣺�ó���Ҫ��¼ǰһ���ַ��͵�ǰ�ַ�����"Receive your eieio award"���������������ԡ�
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