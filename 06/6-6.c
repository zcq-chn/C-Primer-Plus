//  ��дһ�������ӡһ�����ÿһ�д�ӡһ��������������ƽ����������������Ҫ���û�������������ޡ�ʹ��һ��forѭ����

#include <stdio.h>
int main(void)
{
    int upper_limit, lower_limit;

    printf("Enter lower_limit: ");
    scanf("%d", &lower_limit);
    printf("Enter upper limit: ");
    scanf("%d", &upper_limit);

    for (int num = lower_limit; num <= upper_limit; num++)
    {
        printf("number: %2d, square: %4ld, cube: %6ld\n", num, num * num, num * num * num);
    }

    return 0;
}