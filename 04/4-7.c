/*
    ��дһ�����򣬽�һ��double���͵ı�������Ϊ1.0/3.0��һ��float���͵ı�������λ1.0/3.0��
    �ֱ���ʾ���μ���Ľ����3�Σ�
    һ����ʾС�������6λ���֣�
    һ����ʾС�������12λ���֣�
    һ����ʾС�������16λ���֡�
    ������Ҫ����float.hͷ�ļ�������ʾFLT_DIG��DBL_DIG��ֵ��1.0/3.0��ֵ����Щֵһ����
*/

#include <stdio.h>
#include <float.h>

int main(void)
{
    double d_result = 1.0 / 3.0;
    float f_result = 1.0f / 3.0f;

    printf("float  1.0/3.0 = %.6f\n", f_result);
    printf("double 1.0/3.0 = %.6lf\n", d_result);
    printf("float  1.0/3.0 = %.12f\n", f_result);
    printf("double 1.0/3.0 = %.12lf\n", d_result);
    printf("float  1.0/3.0 = %.16f\n", f_result);
    printf("double 1.0/3.0 = %.16lf\n", d_result);
    printf("FLT_DIG = %d\n", FLT_DIG);
    printf("DBL_DIG = %d\n", DBL_DIG);

    return 0;
}