/*
    ��дһ������Ҫ���û�����һ������������һ��������������������޵����޷�Χ������������ƽ���ͣ�����ʾ��������
    Ȼ����������ʾ�û��������޺���������������ʾ�����ֱ���û�����������������ڻ�С����������Ϊֹ��
    ���������ʾ�����£�

    Enter lower and upper integer limits:5 9
    The sums of the squares from 25 to 81 is 255
    Enter next set of limits:3 25
    The sums of the squares from 9 to 625 is 5520
    Enter next set of limits:5 5
    Done
*/

#include <stdio.h>
int main(void)
{
    int lower, upper;
    
    printf("Enter lower and upper integer limits:");

    while ((scanf("%d %d", &lower, &upper) == 2) && lower < upper)
    {
        long sum = 0;
        for (int num = lower; num <= upper; num++)
        {
            sum += num * num;
        }

        printf("The sums of the squares from %d to %d is %ld.\n", lower * lower, upper * upper, sum);
        printf("Enter lower and upper integer limits:");
    }

    return 0;
}