/**
    ��дһ������:
    ����һ��printf()����������������մ�ӡ��һ�С�
    �ٵ���һ��printf()����������������շֱ��ӡ�����С�
    Ȼ���ٵ�������printf()����������������մ�ӡ��һ�С�
    ���Ӧ������ʾ����ȻҪ��ʾ�������ݻ���������֣���

    Gustav Mahler             <-��1�δ�ӡ������
    Gustav                    <-��2�δ�ӡ������
    Mahler                    <-���ǵ�2�δ�ӡ������  
    Gustav Mahler             <-��3�κ͵�4�δ�ӡ������ 
*/

#include <stdio.h>
int main(void)
{
    printf("Gustav Mahler\n");
    printf("Gustav\nMahler\n");
    printf("Gustav");
    printf(" Mahler\n");

    return 0;
}