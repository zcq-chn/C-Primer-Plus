/*
��дһ�������ȡ���룬����#�ַ�ֹͣ������Ҫ��ӡÿ��������ַ��Լ���Ӧ��ASCII�루ʮ���ƣ���ÿ�д�ӡ8�����ַ�-ASCII�롰��ϡ����飺ʹ���ַ���������ģ�����%��ÿ8��ѭ������ʱ��ӡһ�����з���
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