//  һ���Լ��3.156 * 10^7�롣��дһ��������ʾ�û��������䣬Ȼ����ʾ�������Ӧ��������

#include <stdio.h>
#define YEAR_TO_SECONDS 3.156e7

int main(void)
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your seconds corresponding to ypur age is %e.\n", age * YEAR_TO_SECONDS);

    return 0;
}