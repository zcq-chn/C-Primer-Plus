/*
    ABC�ʹ��ӻ�����۵����ۼ�Ϊ2.05��Ԫ/��������ۼ�Ϊ1.15��Ԫ/�������ܲ��ۼ�Ϊ1.09��Ԫ/����
    ������˷�֮ǰ��100��Ԫ�Ķ�����5%�����Żݡ�
    ���ڻ����5���Ķ�����ȡ6.5��Ԫ���˷ѺͰ�װ�ѣ�5��~20���Ķ�����ȡ14��Ԫ���˷ѺͰ�װ�ѣ�����20���Ķ�����14��Ԫ�Ļ�����ÿ����1������0.5��Ԫ��
    ��дһ��������ѭ������switch���ʵ���û����벻ͬ����ĸʱ�в�ͬ����Ӧ��������a����Ӧ�����û������󼻵İ�����b����˵İ�����c�Ǻ��ܲ��İ�����q���˳�������
    ����Ҫ��¼�ۼƵ���������������û�����4������ˣ�Ȼ������5������ˣ�����Ӧ����9������ˡ�
    Ȼ�󣬸ó���Ҫ��������ܼۡ��ۿۣ�����еĻ������˷ѺͰ�װ�ѡ�
    ��󣬳���Ӧ��ʾ���еĹ�����Ϣ����Ʒ�ۼۡ���������������λ���������������߲˷��á��������ܷ��á��ۿۣ�����еĻ������˷ѺͰ�װ�ѣ��Լ����еķ����ܶ
*/

#include <stdio.h>

// ���峣���۸�
#define ARTICHOKE_PRICE 2.05
#define BEET_PRICE 1.15
#define CARROT_PRICE 1.09
#define DISCOUNT_THRESHOLD 100.0
#define DISCOUNT_RATE 0.05

// ��������
void displayMenu();
float calculateShipping(float totalWeight);
void displayOrderSummary(float artichokeWeight, float beetWeight, float carrotWeight);

int main(void) {
    char choice;
    float artichokeWeight = 0.0, beetWeight = 0.0, carrotWeight = 0.0;
    float inputWeight;

    printf("��ӭ����ABC�ʹ��ӻ��궩��ϵͳ��\n");
    
    while (1) {
        displayMenu();
        printf("����������ѡ��: ");
        scanf(" %c", &choice);  // ע��ո����������հ��ַ�
        
        switch (choice) {
            case 'a':
            case 'A':
                printf("�������󼻵İ���: ");
                scanf("%f", &inputWeight);
                artichokeWeight += inputWeight;
                printf("����� %.2f ���󼻡���ǰ������: %.2f ��\n", inputWeight, artichokeWeight);
                break;
                
            case 'b':
            case 'B':
                printf("��������˵İ���: ");
                scanf("%f", &inputWeight);
                beetWeight += inputWeight;
                printf("����� %.2f ����ˡ���ǰ�������: %.2f ��\n", inputWeight, beetWeight);
                break;
                
            case 'c':
            case 'C':
                printf("��������ܲ��İ���: ");
                scanf("%f", &inputWeight);
                carrotWeight += inputWeight;
                printf("����� %.2f �����ܲ�����ǰ���ܲ�����: %.2f ��\n", inputWeight, carrotWeight);
                break;
                
            case 'q':
            case 'Q':
                displayOrderSummary(artichokeWeight, beetWeight, carrotWeight);
                printf("��л���Ķ������ټ���\n");
                return 0;
                
            default:
                printf("��Ч���룬������ѡ��\n");
                break;
        }
    }
    
    return 0;
}

// ��ʾ�˵�ѡ��
void displayMenu() {
    printf("\n===== �����˵� =====\n");
    printf("a) �� ($%.2f/��)\n", ARTICHOKE_PRICE);
    printf("b) ��� ($%.2f/��)\n", BEET_PRICE);
    printf("c) ���ܲ� ($%.2f/��)\n", CARROT_PRICE);
    printf("q) ��ɶ���\n");
}

// �����˷�
float calculateShipping(float totalWeight) {
    if (totalWeight <= 5.0) {
        return 6.5;
    } else if (totalWeight <= 20.0) {
        return 14.0;
    } else {
        return 14.0 + (totalWeight - 20.0) * 0.5;
    }
}

// ��ʾ����ժҪ
void displayOrderSummary(float artichokeWeight, float beetWeight, float carrotWeight) {
    // ����������
    float totalWeight = artichokeWeight + beetWeight + carrotWeight;
    
    // ����������
    float artichokeCost = artichokeWeight * ARTICHOKE_PRICE;
    float beetCost = beetWeight * BEET_PRICE;
    float carrotCost = carrotWeight * CARROT_PRICE;
    
    // �����ܷ���
    float totalCost = artichokeCost + beetCost + carrotCost;
    
    // �����ۿ�
    float discount = (totalCost >= DISCOUNT_THRESHOLD) ? totalCost * DISCOUNT_RATE : 0.0;
    float discountedCost = totalCost - discount;
    
    // �����˷�
    float shippingCost = calculateShipping(totalWeight);
    
    // �������շ���
    float finalCost = discountedCost + shippingCost;
    
    // ��ʾ����ժҪ
    printf("\n===== ����ժҪ =====\n");
    printf("��Ʒ        ����      ����(��)   ����\n");
    printf("------------------------------------\n");
    printf("��      $%7.2f   %8.2f   $%8.2f\n", ARTICHOKE_PRICE, artichokeWeight, artichokeCost);
    printf("���      $%7.2f   %8.2f   $%8.2f\n", BEET_PRICE, beetWeight, beetCost);
    printf("���ܲ�    $%7.2f   %8.2f   $%8.2f\n", CARROT_PRICE, carrotWeight, carrotCost);
    printf("------------------------------------\n");
    printf("�����ܷ���: $%.2f\n", totalCost);
    
    if (discount > 0.0) {
        printf("�ۿ� (%.0f%%): -$%.2f\n", DISCOUNT_RATE * 100, discount);
        printf("�ۿۺ����: $%.2f\n", discountedCost);
    }
    
    printf("�˷ѺͰ�װ��: $%.2f\n", shippingCost);
    printf("�����ܷ���: $%.2f\n", finalCost);
}