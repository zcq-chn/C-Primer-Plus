/*
    Daphne��10%�ĵ���ϢͶ����100��Ԫ��Ҳ����˵��ÿ��Ͷ�ʻ����൱��ԭʼͶ�ʵ�10%����Deirdre��5%�ĸ�����ϢͶ����100��Ԫ��Ҳ����˵����Ϣ�ǵ�ǰ����5%������֮ǰ����Ϣ����
    ��дһ�����򣬼�����Ҫ������Deirdre��Ͷ�ʶ�Żᳬ��Daphne������ʾ��ʱ���˵�Ͷ�ʶ
*/

#include <stdio.h>
int main(void)
{
    double daphne = 100.0, deirdre = 100.0;
    int year = 0;

    while (deirdre <= daphne)
    {
        year++;
        daphne += 10;
        deirdre *= 1.05;
    }

    printf("After %d years, Daphne's money is %g, and Deirdre's money is %g.\n", year, daphne, deirdre);

    return 0;
}