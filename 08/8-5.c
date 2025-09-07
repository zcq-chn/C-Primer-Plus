/*
    ?�޸ĳ����嵥8.4�Ĳ����ֳ���ʹ�ø����ܵĲ²���ԡ����磬���������50��ѯ���û��ǲ´��ˡ���С�˻��ǲ¶��ˡ������С�ˣ���ô��һ�β²��ֵӦ����50��100��ֵ��Ҳ����75�������β´��ˣ���ô��һ�β²��ֵӦ��50��75����ֵ���ȵȡ�ʹ�ö��ֲ��ң�binary search�����ԣ�����û�û����ƭ������ô����ܿ�ͻ�µ���ȷ�Ĵ𰸡�
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
