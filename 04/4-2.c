/*
    ��дһ��������ʾ�û��������֣���ִ�����²�����
    a. ��ӡ���֣�����˫���ţ�
    b. �ڿ��Ϊ20���ֶ��Ҷ˴�ӡ���֣�����˫���ţ�
    c. �ڿ��Ϊ20���ֶ���˴�ӡ���֣�����˫���ţ�
    d. �ڱ�������ȿ�3���ֶ��д�ӡ���֡�
*/

#include <stdio.h>
#include <string.h>
#define WIDTH 20
int main(void)
{
    char name[40];
    printf("Enter your name: ");
    scanf("%[^\n]", name);

    printf("\"%*s\"\n", WIDTH - 1 - 1, name);
    printf("\"%-*s\"\n", WIDTH - 1 - 1 , name);
    printf("%*s\n", strlen(name) + 3, name);

    return 0;
}