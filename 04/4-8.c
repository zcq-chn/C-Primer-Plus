/*
    ��дһ��������ʾ�û��������е���̺����ĵ���������
    Ȼ����㲢��ʾ����ÿ����������ʻ��Ӣ��������ʾС�������1λ���֡�
    ��������ʹ��1���ش�Լ3.785����1Ӣ���ԼΪ1.609ǧ�ף��ѵ�λ��Ӣ��/���ص�ֵת��Ϊ��/100���ŷ��ͨ�õ�ȼ�����ı�ʾ����������ʾ�������ʾС�������1λ���֡�
    ע�⣬�������õķ����������ĵ�λȼ�ϵ��г̣�ֵԽ��Խ�ã�����ŷ������õ�λ�������ĵ�ȼ�ϲ���������ֵԽ��Խ�ã���
    ʹ��#define�������ų�����ʹ��const�޶���������������ʾ����ת��ϵ����
*/

#include <stdio.h>
#define GALLON_TO_LITRE     3.785
#define MILE_TO_KILOMETER   1.609

int main(void)
{
    float gallon, mile;
    printf("Enter travel mileage(mile): ");
    scanf("%f", &mile);
    printf("Enter amount of gasoline(gallon): ");
    scanf("%f", &gallon);
    printf("miles per galoon of gasoline: %.1f\n", mile / gallon);
    printf("liters of gasoline sonsumed for driving 100 kilometers: %.1f\n",
            gallon * GALLON_TO_LITRE / mile / MILE_TO_KILOMETER * 100);

    return 0;
}