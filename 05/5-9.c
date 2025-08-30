/*
    ��дһ������Ҫ���û�����һ�������¶ȡ�
    ����Ӧ��ȡdouble���͵�ֵ��Ϊ�¶�ֵ�����Ѹ�ֵ��Ϊ�������ݸ�һ���û��Զ���ĺ���Temperatures()��
    �ú������������¶ȺͿ����¶ȣ�����С���������λ���ֵľ�����ʾ3���¶ȡ�
    Ҫʹ�ò�ͬ���±�����ʾ��3���¶�ֵ�������ǻ����¶�ת�����¶ȵĹ�ʽ��
    �����¶� = 5.0/9.0 * (�����¶� - 32.0)
    �����±곣���ڿ�ѧ�о���0��ʾ�����㣬������͵��¶ȡ������������¶�ת�����¶ȵĹ�ʽ��
    �����¶� = �����¶� + 273.16
    Temperatures()��������const�����¶�ת����ʹ�õı�����
    ��main()������ʹ��һ��ѭ�����û��ظ������¶ȣ����û�����q������������ʱ��ѭ��������
    scanf()�������ض�ȡ���ݵ����������������ȡ�����򷵻�1�������ȡq�򲻷���1������ʹ��==�������scanf()�ķ���ֵ��1���Ƚϣ�������ֵ�Ƿ���ȡ�
*/

#include <stdio.h>

void Temperatures(double);

int main()
{
    double fahrenheit;
    printf("������һ�������¶�(q to quit)��");
    while (scanf("%lf", &fahrenheit) == 1)
    {
        Temperatures(fahrenheit);
        printf("������һ�������¶�(q to quit)��");
    }
    printf("Bye.\n");
    return 0;
}

void Temperatures(double fahrenheit)
{
    const double C_TO_K = 273.16;
    const double F_TO_C = 5.0 / 9.0;
    double celsius = F_TO_C * (fahrenheit - 32.0);
    double kelvin = celsius + C_TO_K;

    printf("�����¶ȣ�%g\n", fahrenheit);
    printf("�����¶ȣ�%g\n", celsius);
    printf("�����¶ȣ�%g\n", kelvin);
}
