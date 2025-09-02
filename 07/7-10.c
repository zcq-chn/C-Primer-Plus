/*
    1988年的美国联邦税收计划是近代最简单的税收方案。它分为4个类别，每个类别有两个等级。下面是该税收计划的摘要（美元数为应征税的收入）：
    类别	税金
    单身	17850美元按15%计，超出部分按28%计
    户主	23900美元按15%计，超出部分按28%计
    已婚、共有	29750美元按15%计，超出部分按28%计
    已婚，离异	14875美元按15%计，超出部分按28%计
    例如，一位工资为20000美元的单身纳税人，应缴纳税费0.15 * 17850 + 0.28 * (20000 - 17850)美元。
    编写一个程序，让用户指定缴纳税金的种类和应纳税收入，然后计算税金。程序应通过循环让用户可以多次输入。
*/

#include <stdio.h>
#define SORT1 17850
#define SORT2 23900
#define SORT3 29750
#define SORT4 14875
#define RATE1 0.15
#define RATE2 0.28
int main(void)
{
    int sort;
    double income, tax;

    while (1)
    {
        printf("选项    类别          税金\n");
        printf(" 1.     单身          17850美元按15%%计，超出部分按28%%计\n");
        printf(" 2.     户主          23900美元按15%%计，超出部分按28%%计\n");
        printf(" 3.     已婚，共有    29750美元按15%%计，超出部分按28%%计\n");
        printf(" 4.     已婚，离异    14875美元按15%%计，超出部分按28%%计\n");
        printf(" 5.     退出\n");
        printf("请输入你的选项：");
        while ((scanf_s("%d", &sort)) != 1 || sort > 5 || sort < 1)
        {
            printf("Please enter 1, 2, 3, 4 or 5: ");
        }

        if (sort == 5)
            break;

        printf("请输入你的应纳税收入：");
        while ((scanf_s("%lf", &income)) != 1 || income < 0)
        {
            printf("You should enter a positive number: ");
        }

        switch (sort)
        {
            case 1:
                if (income <= SORT1)
                    tax = income * RATE1;
                else
                    tax = SORT1 * RATE1 + (income - SORT1) * RATE2;
                break;
            case 2:
                if (income <= SORT2)
                    tax = income * RATE2;
                else
                    tax = SORT2 * RATE1 + (income - SORT2) * RATE2;
                break;
            case 3:
                if (income <= SORT3)
                    tax = income * RATE1;
                else
                    tax = SORT3 * RATE1 + (income - SORT3) * RATE2;
                break;
            case 4:
                if (income <= SORT4)
                    tax = income * RATE1;
                else
                    tax = SORT4 * RATE1 + (income - SORT4) * RATE2;
                break;
            default: break;
        }
        printf("You choose %d, and your income is %.2lf, so your tax is %.2lf.\n", sort, income, tax);
        printf("Press any key to restart the program.");
        getchar();
        getchar();
    }
    printf("Done!");
    return 0;
}