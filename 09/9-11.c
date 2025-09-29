//  编写并测试Fibonacci()函数，该函数用循环代替递归计算斐波那契数。

#include <stdio.h>

int Fibonacci(int n)
{
    if (n == 1 ||n == 2)
        return 1;

    int a, b, c;
    a = 1;
    b = 1;

    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(void)
{
    int n;
    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("Fibonacci数列的第%d项是: %d\n", n, Fibonacci(n));
    
    return 0;
}