/*
    ��дһ�����򣬴���һ������8��Ԫ�ص�int�������飬�ֱ������Ԫ������Ϊ2��ǰ8���ݡ�ʹ��forѭ����������Ԫ�ص�ֵ��ʹ��do whileѭ����ʾ����Ԫ�ص�ֵ��
*/

#include <stdio.h>
int main(void)
{
    int num[8];
    int value = 1;
    int i = 0;

    for (int index = i; index < 8; index++)
    {
        value *= 2;
        num[index] = value;
    }

    do
    {
        printf("%d ", num[i]);
        i++;
    } while (i < 8);
    
    return 0;
}