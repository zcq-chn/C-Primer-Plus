//  ��дһ�������һ�����ʶ���һ���ַ������У�Ȼ�����ӡ������ʡ�
//  ��ʾ��strlen()��������4�½��ܹ��������ڼ����������һ���ַ����±ꡣ

#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[20];

    printf("Enter a wrod: ");
    scanf("%s", word);
    
    for (int i = strlen(word) - 1; i >= 0; i--)
    {
        putchar(word[i]);
    }

    return 0;
}