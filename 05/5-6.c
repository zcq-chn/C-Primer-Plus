/*
    �޸ı����ϰ5��ϰ��5.5���ĳ���ʹ���ܼ���������ƽ���ͣ�������Ϊ��1��׬$1����2��׬$4����3��׬$9���Դ����ƣ��⿴�����ܲ�����Cû��ƽ�����������ǿ�����n * n����ʾn��ƽ����
*/

#include <stdio.h>
int main(void)
{
    int days;
    printf("������������");
    scanf("%d", &days);
    int sum = 0;
    for (int i = 1; i <= days; i++)
    {
        sum += i * i;
    }
    printf("%d�����ܹ�׬��%d��Ԫ��\n", days, sum);
    return 0;
}