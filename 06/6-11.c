//  ��дһ�������������ж���8��������Ȼ�󰴵����ӡ��8��������

#include <stdio.h>
int main(void)
{
    int num[8];
    printf("Enter 8 integers:");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("In reverse order:");
    for (int i = 7; i >= 0; i--)
    {
        printf(" %d", num[i]);
    }
    printf("\n");

    return 0;
}
