/*
    Chuckie LuckyӮ����100����Ԫ��˰�󣩣����ѽ������������8%���˻�����ÿ������һ�죬Chuckieȡ��10����Ԫ��
    ��дһ�����򣬼���������Chuckie��ȡ���˻���Ǯ��
*/

#include <stdio.h>
int main(void)
{
    double money = 1000000.0;
    int year = 1;

    for ( ; money > 0; year++)
    {
        money *= 1.08;
        money -= 100000;
    }

    printf("After %d years, Chuckie will take out all the money.\n", year);
    return 0;
}