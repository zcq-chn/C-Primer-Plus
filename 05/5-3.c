/*
    ��дһ��������ʾ�û�����������Ȼ����ת����������������
    ���磬�û�����18����ת����2��4�졣������ĸ�ʽ��ʾ�����

    18 days are 2 weeks, 4 days.
*/

#include <stdio.h>
#define DAYS_PER_WEEK 7

int main(void)
{
    int days;
    printf("������������");
    scanf("%d", &days);
    int weeks = days / DAYS_PER_WEEK;
    days = days % DAYS_PER_WEEK;

    printf("%d�����%d��%d�졣\n", days, weeks, days);

    return 0;
}