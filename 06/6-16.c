/*
    Daphne以10%的单利息投资了100美元（也就是说，每年投资获利相当于原始投资的10%）。Deirdre以5%的复合利息投资了100美元（也就是说，利息是当前余额的5%，包含之前的利息）。
    编写一个程序，计算需要多少年Deirdre的投资额才会超过Daphne，并显示那时两人的投资额。
*/

#include <stdio.h>
int main(void)
{
    double daphne = 100.0, deirdre = 100.0;
    int year = 0;

    while (deirdre <= daphne)
    {
        year++;
        daphne += 10;
        deirdre *= 1.05;
    }

    printf("After %d years, Daphne's money is %g, and Deirdre's money is %g.\n", year, daphne, deirdre);

    return 0;
}