/*
    ��дһ��������ʾ��ģ����Ľ�������û�����ĵ�1��������Ϊ��ģ������ĵ�2��������󣬸�������������б��ֲ��䡣�û�������������ǵ�1��������󡣵��û�����һ������ֵʱ����������������ʾ�����£�

    This program computes moduli.
    Enter an integer to serve as the second operand:256
    Now enter the first operand:438
    438 % 256 is 182
    Enter next number for first operand (<= 0 to quit):1234567
    1234567 % 256 is 135
    Enter next number for first operand (<= 0 to quit):0
    Done
*/

#include <stdio.h>
int main(void)
{
    int divisor, dividend;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d", &divisor);
    printf("Now enter the first operand:");
    while (scanf("%d", &dividend) == 1 && dividend > 0)
    {
        printf("%d %c %d is %d\n", dividend, '%', divisor, dividend % divisor);
        printf("Enter next number for first operand (<= 0 to quit):");
    }
    printf("Done");

    return 0;
}