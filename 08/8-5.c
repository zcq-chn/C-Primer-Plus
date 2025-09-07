/*
    ?修改程序清单8.4的猜数字程序，使用更智能的猜测策略。例如，程序最初猜50，询问用户是猜大了、猜小了还是猜对了。如果猜小了，那么下一次猜测的值应该是50和100中值，也就是75。如果这次猜大了，那么下一次猜测的值应是50和75的中值，等等。使用二分查找（binary search）策略，如果用户没有欺骗程序，那么程序很快就会猜到正确的答案。
*/

#include <stdio.h>

#include <stdio.h>

int main(void)
{
    int high = 100;
    int low = 1;
    int guess = (high + low) / 2;
    int response;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y')
    {
        if (response == '\n')
            continue;

        if (response != 'h' && response != 'l')
        {
            printf("I don't understand that response. Please enter h for\n");
            printf("high, l for low, or y for correct.\n");
            continue;
        }

        if (response == 'h')
        {
            high = guess - 1;
        } else {
            low = guess + 1;
        }
        guess = (high + low) / 2;

        printf("Well, then, is it %d? [low:%d, high:%d]\n", guess, low, high);
        if (high <= low)
            break;
    }

    printf("The number is %d. I knew I could do it!\n", guess);
    return 0;
}
