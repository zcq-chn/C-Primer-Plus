/*
    ��дһ�����򣬶�ȡһ�����룬Ȼ�����������ݵ����ӡ������
    ���԰�����洢��char���͵������У�����ÿ���ַ�������255��
    ����һ�£�����%cת��˵����scanf()����һ��ֻ�ܴ������ж�ȡһ���ַ����������û�����Enter��ʱscanf()����������һ�������ַ���\n����
*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char string[256] = {0};
    printf("Please input a string:");
    scanf("%[^\n]", string);

    printf("The reveeersed string you input is:");
    for (int i = strlen(string) - 1; i >= 0; i--)
    {
        printf("%c", string[i]);
    }

    return 0;
}