/*
    ��дһ�����򣬶�ȡһ����������������С�����������ӡ��Ȼ����ָ����������ӡ��
    ������ĸ�ʽ���������ϵͳ��ͬ��ָ����������ʾ��λ�����ܲ�ͬ����

    a. The input is 21.3 or 2.1e+001.
    b. The input is +21.290 or 2.129E+001
*/

#include <stdio.h>
int main(void)
{
    float num;
    printf("Enter a float number: ");
    scanf("%f", &num);
    printf("a. The input is %.1f or %.1e.\n", num, num);
    printf("b. The input is %+7.3f or %.3E\n", num, num);

    return 0;
}