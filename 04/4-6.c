/*
    ��дһ����������ʾ�û���������Ȼ����ʾ�û������ա�
    ��һ�д�ӡ�û�����������գ���һ�зֱ��ӡ�����յ���ĸ������ĸ��Ҫ����Ӧ�����յĽ�β���룬������ʾ��
    Melissa Honeybee
          7        8
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char first_name[40], last_name[40];

    printf("Enter your first name: ");
    scanf("%[^\n]", first_name);    getchar();
    printf("Enter your last name: ");
    scanf("%[^\n]", last_name);     getchar();

    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n", strlen(first_name), strlen(first_name), 
                        strlen(last_name), strlen(last_name));

    return 0;
}