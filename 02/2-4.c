/*
    ��дһ�������������������
    For he's a jolly good fellow!
    For he's a jolly good fellow!
    For he's a jolly good fellow!
    Whick nobody can deny!
    ����main()�������⣬�ó���Ҫ���������Զ��庯����һ����Ϊjolly()�����ڴ�ӡǰ3
    ����Ϣ������һ�δ�ӡһ������һ��������Ϊdeny()����ӡ���һ����Ϣ��
*/

#include <stdio.h>

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
    printf("Whick nobody can deny!\n");
}

int main(void)
{
    jolly();
    jolly();
    jolly();

    deny();

    return 0;
}