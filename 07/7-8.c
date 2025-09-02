/*
    �޸���ϰ7�ļ���a���ó�����Ը���һ����ѡ��Ĺ��ʵȼ��˵���ʹ��switch��ɹ��ʵȼ�ѡ�����г������ʾ�Ĳ˵�Ӧ������������
    *****************************************************************
    Enter the number corresponding to the desired pay rate or action:
    1) $8.75/hr                            2) $9.33/hr
    3) $10.00/hr                           4) $11.20/hr
    5) quit
    *****************************************************************
    ���ѡ��1~4���е�һ�����֣�����Ӧ��ѯ���û�������Сʱ��������Ҫͨ��ѭ�����У������û�����5���������1~5��������֣�����Ӧ�����û�������ȷ��ѡ�Ȼ�����ظ���ʾ�˵���ʾ�û����롣ʹ��#define�������ų�����ʾ�����ʵȼ���˰�ʡ�
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