/*
    ABC邮购杂货店出售的洋蓟售价为2.05美元/磅，甜菜售价为1.15美元/磅，胡萝卜售价为1.09美元/磅。
    在添加运费之前，100美元的订单有5%打折优惠。
    少于或等于5磅的订单收取6.5美元的运费和包装费，5磅~20磅的订单收取14美元的运费和包装费，超过20磅的订单在14美元的基础上每续重1磅增加0.5美元。
    编写一个程序，在循环中用switch语句实现用户输入不同的字母时有不同的响应，即输入a的响应是让用户输入洋蓟的磅数，b是甜菜的磅数，c是胡萝卜的磅数，q是退出订购。
    程序要记录累计的重量。即，如果用户输入4磅的甜菜，然后输入5磅的甜菜，程序应报告9磅的甜菜。
    然后，该程序要计算货物总价、折扣（如果有的话）、运费和包装费。
    随后，程序应显示所有的购买信息：物品售价、订购的重量（单位：磅）、订购的蔬菜费用、订单的总费用、折扣（如果有的话）、运费和包装费，以及所有的费用总额。
*/

#include <stdio.h>

// 定义常量价格
#define ARTICHOKE_PRICE 2.05
#define BEET_PRICE 1.15
#define CARROT_PRICE 1.09
#define DISCOUNT_THRESHOLD 100.0
#define DISCOUNT_RATE 0.05

// 函数声明
void displayMenu();
float calculateShipping(float totalWeight);
void displayOrderSummary(float artichokeWeight, float beetWeight, float carrotWeight);

int main(void) {
    char choice;
    float artichokeWeight = 0.0, beetWeight = 0.0, carrotWeight = 0.0;
    float inputWeight;

    printf("欢迎来到ABC邮购杂货店订购系统！\n");
    
    while (1) {
        displayMenu();
        printf("请输入您的选择: ");
        scanf(" %c", &choice);  // 注意空格用于跳过空白字符
        
        switch (choice) {
            case 'a':
            case 'A':
                printf("请输入洋蓟的磅数: ");
                scanf("%f", &inputWeight);
                artichokeWeight += inputWeight;
                printf("已添加 %.2f 磅洋蓟。当前洋蓟总量: %.2f 磅\n", inputWeight, artichokeWeight);
                break;
                
            case 'b':
            case 'B':
                printf("请输入甜菜的磅数: ");
                scanf("%f", &inputWeight);
                beetWeight += inputWeight;
                printf("已添加 %.2f 磅甜菜。当前甜菜总量: %.2f 磅\n", inputWeight, beetWeight);
                break;
                
            case 'c':
            case 'C':
                printf("请输入胡萝卜的磅数: ");
                scanf("%f", &inputWeight);
                carrotWeight += inputWeight;
                printf("已添加 %.2f 磅胡萝卜。当前胡萝卜总量: %.2f 磅\n", inputWeight, carrotWeight);
                break;
                
            case 'q':
            case 'Q':
                displayOrderSummary(artichokeWeight, beetWeight, carrotWeight);
                printf("感谢您的订购，再见！\n");
                return 0;
                
            default:
                printf("无效输入，请重新选择。\n");
                break;
        }
    }
    
    return 0;
}

// 显示菜单选项
void displayMenu() {
    printf("\n===== 订购菜单 =====\n");
    printf("a) 洋蓟 ($%.2f/磅)\n", ARTICHOKE_PRICE);
    printf("b) 甜菜 ($%.2f/磅)\n", BEET_PRICE);
    printf("c) 胡萝卜 ($%.2f/磅)\n", CARROT_PRICE);
    printf("q) 完成订购\n");
}

// 计算运费
float calculateShipping(float totalWeight) {
    if (totalWeight <= 5.0) {
        return 6.5;
    } else if (totalWeight <= 20.0) {
        return 14.0;
    } else {
        return 14.0 + (totalWeight - 20.0) * 0.5;
    }
}

// 显示订单摘要
void displayOrderSummary(float artichokeWeight, float beetWeight, float carrotWeight) {
    // 计算总重量
    float totalWeight = artichokeWeight + beetWeight + carrotWeight;
    
    // 计算各项费用
    float artichokeCost = artichokeWeight * ARTICHOKE_PRICE;
    float beetCost = beetWeight * BEET_PRICE;
    float carrotCost = carrotWeight * CARROT_PRICE;
    
    // 计算总费用
    float totalCost = artichokeCost + beetCost + carrotCost;
    
    // 计算折扣
    float discount = (totalCost >= DISCOUNT_THRESHOLD) ? totalCost * DISCOUNT_RATE : 0.0;
    float discountedCost = totalCost - discount;
    
    // 计算运费
    float shippingCost = calculateShipping(totalWeight);
    
    // 计算最终费用
    float finalCost = discountedCost + shippingCost;
    
    // 显示订单摘要
    printf("\n===== 订单摘要 =====\n");
    printf("物品        单价      重量(磅)   费用\n");
    printf("------------------------------------\n");
    printf("洋蓟      $%7.2f   %8.2f   $%8.2f\n", ARTICHOKE_PRICE, artichokeWeight, artichokeCost);
    printf("甜菜      $%7.2f   %8.2f   $%8.2f\n", BEET_PRICE, beetWeight, beetCost);
    printf("胡萝卜    $%7.2f   %8.2f   $%8.2f\n", CARROT_PRICE, carrotWeight, carrotCost);
    printf("------------------------------------\n");
    printf("订单总费用: $%.2f\n", totalCost);
    
    if (discount > 0.0) {
        printf("折扣 (%.0f%%): -$%.2f\n", DISCOUNT_RATE * 100, discount);
        printf("折扣后费用: $%.2f\n", discountedCost);
    }
    
    printf("运费和包装费: $%.2f\n", shippingCost);
    printf("最终总费用: $%.2f\n", finalCost);
}