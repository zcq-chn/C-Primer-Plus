//  ?1个水分子的质量约为3.0 * 10^-23克。1夸脱水大约是950克。
//  编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。

#include <stdio.h>
#define QUART 950
#define HYDRONE 3.0e-23

int main(void)
{
    float quart;
    printf("Enter quart of water: ");
    scanf("%f", &quart);
    printf("The number of water is %g.", quart * QUART / HYDRONE);

    return 0;
}
