//  ?1��ˮ���ӵ�����ԼΪ3.0 * 10^-23�ˡ�1����ˮ��Լ��950�ˡ�
//  ��дһ��������ʾ�û�����ˮ�Ŀ�����������ʾˮ���ӵ�������

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
