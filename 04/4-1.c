//  ��дһ��������ʾ�������������գ�Ȼ���ԡ���.�ա��ĸ�ʽ��ӡ������

#include <stdio.h>
int main(void)
{
    char first_name[40];
    char last_name[40];

    printf("��������: ");
    scanf("%39s", first_name);
    printf("��������: ");
    scanf("%39s", last_name);

    printf("%s.%s\n", first_name, last_name);

    return 0; 
}