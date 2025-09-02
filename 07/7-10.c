/*
    1988�����������˰�ռƻ��ǽ�����򵥵�˰�շ���������Ϊ4�����ÿ������������ȼ��������Ǹ�˰�ռƻ���ժҪ����Ԫ��ΪӦ��˰�����룩��
    ���	˰��
    ����	17850��Ԫ��15%�ƣ��������ְ�28%��
    ����	23900��Ԫ��15%�ƣ��������ְ�28%��
    �ѻ顢����	29750��Ԫ��15%�ƣ��������ְ�28%��
    �ѻ飬����	14875��Ԫ��15%�ƣ��������ְ�28%��
    ���磬һλ����Ϊ20000��Ԫ�ĵ�����˰�ˣ�Ӧ����˰��0.15 * 17850 + 0.28 * (20000 - 17850)��Ԫ��
    ��дһ���������û�ָ������˰��������Ӧ��˰���룬Ȼ�����˰�𡣳���Ӧͨ��ѭ�����û����Զ�����롣
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
        printf("ѡ��    ���          ˰��\n");
        printf(" 1.     ����          17850��Ԫ��15%%�ƣ��������ְ�28%%��\n");
        printf(" 2.     ����          23900��Ԫ��15%%�ƣ��������ְ�28%%��\n");
        printf(" 3.     �ѻ飬����    29750��Ԫ��15%%�ƣ��������ְ�28%%��\n");
        printf(" 4.     �ѻ飬����    14875��Ԫ��15%%�ƣ��������ְ�28%%��\n");
        printf(" 5.     �˳�\n");
        printf("���������ѡ�");
        while ((scanf_s("%d", &sort)) != 1 || sort > 5 || sort < 1)
        {
            printf("Please enter 1, 2, 3, 4 or 5: ");
        }

        if (sort == 5)
            break;

        printf("���������Ӧ��˰���룺");
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