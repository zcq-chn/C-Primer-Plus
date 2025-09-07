/*
    编写一个程序，显示一个提供加法、减法、乘法、除法的菜单。
    获得用户选择的选项后，程序提示用户输入两个数字，然后执行用户刚才选择的操作。该程序只接受菜单提供的选项。
    程序使用float类型的变量存储用户输入的数字，如果用户输入失败，则允许再次输入。
    进行除法运算时，如果用户输入0作为第2个数（除数），程序应提示用户重新输入一个新值。
    该程序的一个运行示例如下：
    *****************************************************************
    a. add                            s. subtract
    m. multiply                       d. divide
    q) quit
    *****************************************************************
    Enter two numbers (q to quit):
*/

#include <stdio.h>

int main(void)
{
    char choice;
    float num1, num2;
    int input_status;

    while (1)
    {
        printf("*****************************************************************\n");
        printf("a. add                            s. subtract\n");
        printf("m. multiply                       d. divide\n");
        printf("q) quit\n");
        printf("*****************************************************************\n");
        printf("Enter your choice (a/s/m/d/q): ");
        scanf(" %c", &choice);

        if (choice == 'q')
        {
            printf("Bye!\n");
            break;
        }

        do
        {
            printf("Enter two numbers: ");
            input_status = scanf("%f %f", &num1, &num2);
            while (getchar() != '\n');
        } while (input_status != 2);

        switch (choice)
        {
            case 'a':
                printf("Result: %.2f\n", num1 + num2);
                break;
            case 's':
                printf("Result: %.2f\n", num1 - num2);
                break;
            case 'm':
                printf("Result: %.2f\n", num1 * num2);
                break;
            case 'd':
                while (num2 == 0)
                {
                    printf("Error: Division by zero! Enter a new value for the second number: ");
                    scanf("%f", &num2);
                }
                printf("Result: %.2f\n", num1 / num2);
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}