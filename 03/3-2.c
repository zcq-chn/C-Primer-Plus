//  ?��дһ������Ҫ����ʾ����һ��ASCII��ֵ���磬66��,Ȼ���ӡ������ַ���

#include <stdio.h>
int main(void)
{
    int character;

    printf("Enter an ASCII number: ");
    scanf("%d", &character);
    printf("%d in ASCII means %c.\n", character, (char)character);

    return 0;
}