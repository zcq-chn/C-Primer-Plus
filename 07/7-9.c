//  编写一个程序，只接受正整数输入，然后显示所有小于或等于该数的素数。

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n);

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i))
            printf("%4d", i);
    }

    return 0;
}

bool is_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}