/*
    ��дһ��������ʾ�û�������ߣ���λ��Ӣ�磩��������Ȼ��������ĸ�ʽ��ʾ�û����������Ϣ��

    Dabney, you are 6.208 feet tall
    ʹ��float���ͣ�����/��Ϊ���š������Ը�⣬����Ҫ���û�������Ϊ��λ������ߣ�������Ϊ��λ��ʾ������
*/
#include <stdio.h>

int main(void)
{
    char name[40];
    float height_inch;

    printf("Please enter your name: ");
    scanf("%s", name);

    printf("Enter your height in inches: ");
    scanf("%f", &height_inch);

    printf("%s, you are %.3f feet tall\n", name, height_inch / 12.0);

    return 0;
}
