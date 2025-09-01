/*
    编写一个程序，提示用户输入一周工作的小时数，然后打印工资总额、税金和净收入。做如下假设：
    a. 基本工资=10.00美元/小时
    b. 加班（超过40小时）=1.5倍的时间
    c. 税率：

    前300美元为15%
    续150美元为20%
    余下的为25%
    用#define定义符号变量。不用在意是否符合当前的税法。
*/

#include <stdio.h>
#define BASE 10.00
#define OVERTIME 1.5
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define BASE1 300
#define BASE2 150

int main(void)
{
    int hours;
    double total_pay, tax1, tax2, tax3, total_tax, net_income;
           total_pay = tax1 = tax2 = tax3 = total_tax = net_income = 0.0;
    
    printf("Please input the hours you worked this week: ");
    scanf("%d", &hours);

    total_pay = (hours > 40) ? (40 * BASE + (hours - 40) * BASE * OVERTIME) : (hours * BASE);

    if (total_pay <= BASE1)
    {
        tax1 = total_pay * RATE1;
    }
    else if (total_pay <= BASE1 + BASE2)
    {
        tax1 = BASE1 * RATE1;
        tax2 = (total_pay - BASE1) * RATE2;
    }
    else
    {
        tax1 = BASE1 * RATE1;
        tax2 = BASE2 * RATE2;
        tax3 = (total_pay - BASE1 - BASE2) * RATE3;
    }

    total_tax = tax1 + tax2 + tax3;
    net_income = total_pay - total_tax;

    printf("Your total pay is %.2f\n", total_pay);
    printf("Your tax1 is %.2f\n", tax1);
    printf("Your tax2 is %.2f\n", tax2);
    printf("Your tax3 is %.2f\n", tax3);
    printf("Your total tax is %.2f\n", total_tax);
    printf("Your net income is %.2f\n", net_income);
    
    return 0;
}