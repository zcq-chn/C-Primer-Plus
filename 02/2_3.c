//  ��дһ��������������ת��������������ʾ������ֵ�����ﲻ�ÿ�����������⡣

#include <stdio.h>
#define YEAR_TO_DAY 365

int main(void)
{
    int age;
    do
    {
        printf("Enter your age: ");
    } while (scanf("%d", &age) != 1 || age < 0);
    
    printf("The age of %d years is %ld days.\n", age, (long)age * YEAR_TO_DAY);

    return 0;
}