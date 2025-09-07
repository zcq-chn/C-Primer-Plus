/*
    修改7-8.c程序，将所有菜单选项的数字替换为字符（a、b、c、d、q）。
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
    char choice;
    int hours;
    double base_pay, total_pay, total_tax, net_income;
           base_pay = total_pay = total_tax = net_income = 0.0;

    print_menu();
    printf("Enter the character corresponding to the desired pay rate or action: ");
    scanf(" %c", &choice);

    switch (choice)
    {
        case 'a': base_pay = WAGE1; break;
        case 'b': base_pay = WAGE2; break;
        case 'c': base_pay = WAGE3; break;
        case 'd': base_pay = WAGE4; break;
        case 'q': printf("Bye!\n"); return 0;
        default: printf("Enter the character corresponding to the desired pay rate or action: ");
                 scanf(" %c", &choice);
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
    printf("Enter the character corresponding to the desired pay rate or action:\n");
    printf("a) $8.75/hr                            b) $9.33/hr\n");
    printf("c) $10.00/hr                           d) $11.20/hr\n");
    printf("q) quit\n");
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