/**
    ��дһ��������ʾ�û���������λÿ�루Mb/s��Ϊ��λ�������ٶȺ������ֽڣ�MB��Ϊ��λ���ļ���С��������Ӧ�����ļ�������ʱ�䡣ע�⣬����1�ֽڵ���8λ��ʹ��float���ͣ�����/��Ϊ���š�
    �ó���Ҫ������ĸ�ʽ��ӡ3��������ֵ�������ٶȡ��ļ���С������ʱ�䣩����ʾС���������λ���֣�
    At 18.12 megabits per second, a file of 2.20 megabytes
    downloads in 0.97 seconds.
 */

#include <stdio.h>

int main(void)
{
    float speed_mbps, size_mb, time_sec;

    printf("Please enter the download speed (in megabits per second): ");
    scanf("%f", &speed_mbps);

    printf("Please enter the file size (in megabytes): ");
    scanf("%f", &size_mb);

    time_sec = (size_mb * 8) / speed_mbps;

    printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed_mbps, size_mb);
    printf("downloads in %.2f seconds.\n", time_sec);

    return 0;
}