//  编写一个程序，在数组中读入8个整数，然后按倒序打印这8个整数。

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
