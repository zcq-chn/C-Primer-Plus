/*
    1.��Ҫһ����Ӣ�絥λת��Ϊ���׵�λ��1  Ӣ��=2.54  ���ף��ĳ���
    �ó���Ҫ��ʾ�û�����Ӣ��ֵ��
    ��������Ƕ������Ŀ�����Ƴ��򣨱�̹��̵ĵ�1���͵�2������
*/

#include <stdio.h>
#define INCH_TO_CM 2.54
int main(void)
{
    float input;

    do
    {
        printf("Please enter a number in inch: ");
    } while (scanf("%f", &input) != 1);
    
    printf("%.2f inches are %.2f CM.\n", input, input * INCH_TO_CM);

    return 0;
}