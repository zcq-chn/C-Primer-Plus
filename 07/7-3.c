/*
��дһ�����򣬶�ȡ����ֱ���û�����0����������󣬳���Ӧ�����û������ż����������0����������Щż����ƽ��ֵ�������������������������ƽ��ֵ��
*/

#include <stdio.h>
int get_number(void);
int main(void)
{
    int num, even_num = 0, odd_num = 0, even_sum = 0, odd_sum = 0;
    while ((num = get_number()) != 0)
    {
        if (num % 2 == 0)
        {
            even_num++;
            even_sum += num;
        }
        else
        {
            odd_num++;
            odd_sum += num;
        }
    }
    printf("even_num: %d, even_average: %d, odd_num: %d, odd_average: %d\n", even_num, even_sum / even_num, odd_num, odd_sum / odd_num);

    return 0;
}

int get_number(void)
{
    int num;

    printf("Please input a number: ");
    scanf("%d", &num);

    return num;
}