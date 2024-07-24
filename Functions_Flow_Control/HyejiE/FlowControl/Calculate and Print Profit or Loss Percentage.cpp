//
// Created by HaejiK on 2024-07-23.
//
# include <stdio.h>
int main() {
    int cost, price;
    float result;

    printf("Enter the cost\n");
    scanf("%d", &cost);

    printf("Enter the selling price\n");
    scanf("%d", &price);

    if (price > cost) {
        result = ((float)(price - cost) / cost) * 100;
        printf("Profit: %.2f%%\n", result);
    } else if (price < cost) {
        result = ((float)(cost - price) / cost) * 100;
        printf("Loss: %.2f%%\n", result);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}