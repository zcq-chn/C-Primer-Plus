/*
    1Ʒ��=2�� 1��=8��˾ 1��˾=2������ 1������=3���� 
    ��ʾ�û����뱭�� ����Ʒ�ѡ���˾�����ס�����Ϊ��λ��ʾ�ȼ�������
*/

#include <stdio.h>

#define CUPS_PER_PINT 2
#define OUNCES_PER_CUP 8
#define TABLESPOONS_PER_OUNCE 2
#define TEASPOONS_PER_TABLESPOON 3

int main(void)
{
    float cups;
    printf("�����뱭����");
    scanf("%f", &cups);

    float pints = cups / CUPS_PER_PINT;
    float ounces = cups * OUNCES_PER_CUP;
    float tablespoons = ounces * TABLESPOONS_PER_OUNCE;
    float teaspoons = tablespoons * TEASPOONS_PER_TABLESPOON;

    printf("%g �����ڣ�\n", cups);
    printf("%g Ʒ��\n", pints);
    printf("%g ��˾\n", ounces);
    printf("%g ������\n", tablespoons);
    printf("%g ����\n", teaspoons);

    return 0;
}

