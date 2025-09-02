/*
    修改练习7的假设a，让程序可以给出一个供选择的工资等级菜单。使用switch完成工资等级选择。运行程序后，显示的菜单应该类似这样：
    *****************************************************************
    Enter the number corresponding to the desired pay rate or action:
    1) $8.75/hr                            2) $9.33/hr
    3) $10.00/hr                           4) $11.20/hr
    5) quit
    *****************************************************************
    如果选择1~4其中的一个数字，程序应该询问用户工作的小时数。程序要通过循环运行，除非用户输入5。如果输入1~5以外的数字，程序应提醒用户输入正确的选项，然后再重复显示菜单提示用户输入。使用#define创建符号常量表示各工资等级和税率。
*/

#include <stdio.h>
#define WAGE1 8.75
#define WAGE2 9.33
#define WAGE3 10.00
#define WAGE4 11.20
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define BASE1 300
#define BASE2 150

void print_menu(void);
double pay(double base_pay, double hours);
double tax(double total_pay);

int main(void)
{
    int choice, hours;
    double base_pay, total_pay, total_tax, net_income;
           base_pay = total_pay = total_tax = net_income = 0.0;

    print_menu();
    printf("Enter the number corresponding to the desired pay rate or action: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1: base_pay = WAGE1; break;
        case 2: base_pay = WAGE2; break;
        case 3: base_pay = WAGE3; break;
        case 4: base_pay = WAGE4; break;
        case 5: printf("Bye!\n"); return 0;
        default: printf("Enter the number corresponding to the desired pay rate or action: ");
                 scanf("%d", &choice);
    }

    printf("Enter the hours you worked this week: ");
    scanf("%d", &hours);

    total_pay = pay(base_pay, hours);
    total_tax = tax(total_pay);
    net_income = total_pay - total_tax;

    printf("Your total pay is %.2f\n", total_pay);
    printf("Your tax is %.2f\n", total_tax);
    printf("Your net income is %.2f\n", net_income);

    return 0;
}

void print_menu(void)
{
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr                            2) $9.33/hr\n");
    printf("3) $10.00/hr                           4) $11.20/hr\n");
    printf("5) quit\n");
    printf("*****************************************************************\n");
}

double pay(double base_pay, double hours)
{
    double total_pay = 0.0;
    total_pay = (hours > 40) ? (40 * base_pay + (hours - 40) * base_pay * 1.5) : (hours * base_pay);
    return total_pay;
}

double tax(double total_pay)
{
    double tax = 0.0;
    if (total_pay <= BASE1)
    {
        tax = total_pay * RATE1;
    }
    else if (total_pay <= BASE1 + BASE2)
    {
        tax = BASE1 * RATE1 + (total_pay - BASE1) * RATE2;
    }
    else
    {
        tax = BASE1 * RATE1 + BASE2 * RATE2 + (total_pay - BASE1 - BASE2) * RATE3;
    }
    return tax;
}