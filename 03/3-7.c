//  1Ӣ���൱��2.54���ס���дһ��������ʾ�û�������ߣ�/Ӣ�磩��Ȼ��������Ϊ��λ��ʾ��ߡ�

#include <stdio.h>
#define INCH_CM 2.54
int main(void)
{
    double height_inch, height_cm;
    printf("������������ߣ�Ӣ�磩��");
    scanf("%lf", &height_inch);
    height_cm = height_inch * INCH_CM;
    printf("�������Ϊ��%g ���ס�\n", height_cm);
    return 0;
}