/*
    ��дһ��������ʾ�û�����һ��double���͵���������ӡ����������ֵ��
    �Լ����һ���������㲢��ӡ����ֵ��main()����Ҫ���û������ֵ���ݸ�������
*/

#include <stdio.h>

double cube(double);

int main(void)
{
    double num;
    printf("������һ������");
    scanf("%lf", &num);
    printf("����������ֵ�ǣ�%g\n", cube(num));
    return 0;
}

double cube(double x)
{
    return x * x * x;
}
