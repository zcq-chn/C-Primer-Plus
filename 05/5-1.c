/*
    ��дһ�����򣬰��÷��ӱ�ʾ��ʱ��ת������Сʱ�ͷ��ӱ�ʾ��ʱ�䡣
    ʹ��#define��const����һ����ʾ60�ķ��ų�����const������
    ͨ��whileѭ�����û��ظ�����ֵ��ֱ���û�����С�ڻ����0��ֵ��ֹͣѭ����
*/

#include <stdio.h>
#define MINUTES_PER_HOUR 60
int main(voids)
{
    int minutes;
    printf("�����������������С�ڻ����0��ֵ�˳�����\n");
    while (1)
    {
        scanf("%d", &minutes);
        if (minutes <= 0)
        {
            printf("���������\n");
            break;
        }
        int hours = minutes / MINUTES_PER_HOUR;
        int remaining_minutes = minutes % MINUTES_PER_HOUR;
        printf("%d���ӵ���%dСʱ%d���ӡ�\n", minutes, hours, remaining_minutes);
    }
    return 0;
}
