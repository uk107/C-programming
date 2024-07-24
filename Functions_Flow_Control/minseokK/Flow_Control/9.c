//
// Created by MinseokK on 24. 7. 23.
//
// Calculate and Print Profit or Loss Percentage
#include <stdio.h>
int main(){
    // 이익 -> 판매가격 - 구매 가격
    // 손실 -> 구매 가격 - 판매가격
    // 이익 백분율 -> 이익 / 구매가격 * 100
    // 손실 백분율 -> 손실 / 구매가격 * 100
    //구매 가격
    float purchase;
    //판매 가격
    float sell;
    printf("purchase price : \n");
    scanf("%d", &purchase);
    printf("selling price : ");
    scanf("%d", &sell);
    float rate;
    float profit_Or_Loss;
    // 이익 or 손실
    if(sell > purchase) {
        // 이익
        profit_Or_Loss = sell - purchase;
        rate = (profit_Or_Loss/purchase) * 100;

        printf("profit_rate: %.2f%%\n", rate);
    }else if(sell < purchase) {
        //손해
        profit_Or_Loss = purchase - sell;
        rate = (profit_Or_Loss/sell) * 100;
        printf("Loss_rate: %.2f%%\n", rate);
    }else {
        printf("nothing");
    }

