//  ��дһ������Ҫ���û���������������������ӡ����֮����������˻��Ľ�������û����������֮ǰ������Ӧѭ�������û������ÿ��ֵ��

#include <stdio.h>
int main(void)
{
    float one, two;
    printf("Enter two float numbers: ");
    while(scanf("%f %f", &one, &two) == 2)
    {
        printf("(%g - %g) / (%g * %g) = %g.\n", one, two, one, two, (one - two) / (one * two));
        printf("Enter two float numbers: ");
    }
    printf("Done!\n");

    return 0;
}