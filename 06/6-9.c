//  �޸���ϰ8��ʹ��һ���������ؼ���Ľ����

#include <stdio.h>

float answer(float, float);
int main(void)
{
    float one, two;
    printf("Enter two float numbers: ");
    while(scanf("%f %f", &one, &two) == 2)
    {
        printf("(%g - %g) / (%g * %g) = %g.\n", one, two, one, two, answer(one, two));
        printf("Enter two float numbers: ");
    }
    printf("Done!\n");

    return 0;
}

float answer(float one, float two)
{
    return (one - two) / (one * two);
}