/*
    ��дһ��������ʾ�û�����һ����ߣ���λ�����ף������ֱ������׺�Ӣ�ߡ�Ӣ��Ϊ��λ��ʾ��ֵ��������С�����֡�����Ӧ�������û��ظ�������ߣ�ֱ���û�����һ������ֵ�������ʾ�����£�
    Enter a height in centimeters:182
    182.0 cm = 5 feet, 11.7 inches
    Enter a height in centimeters (<=0 to quit):168.7
    168.7 cm = 5 feet, 6.4 inches
    Enter a height in centimeters (<=0 to quit):0
    bye
*/

#include <stdio.h>
#define CM_PER_FOOT 30.48
#define CM_PER_INCH 2.54
#define INCHES_PER_FOOT 12

int main(void)
{
    float height;
    printf("������һ����ߣ���λ�����ף���");
    while (scanf("%f", &height) == 1 && height > 0)
    {
        float feet = height / CM_PER_FOOT;
        float inches = height / CM_PER_INCH - INCHES_PER_FOOT * (int)feet;
        printf("%.1f cm = %d feet, %.1f inches\n", height, (int)feet, inches);
        printf("������һ����ߣ���λ�����ף�������С�ڻ����0��ֵ�˳�����");
    }
    printf("bye\n");
    return 0;
}
