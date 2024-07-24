
# include <stdio.h>
float calculate_interest(int price, int cost) {
    float result;
    if (price > cost) {
        result = ((float)(price - cost) / cost) * 100;
        // printf("Profit: %.2f%%\n", result);
    } else if (price < cost) {
        result = ((float)(cost - price) / cost) * 100;
        // printf("Loss: %.2f%%\n", result);
    }
    return result;
}

int main() {
    int price, cost;
    printf("Enter the cost\n");
    scanf("%d", &cost);

    printf("Enter the selling price\n");
    scanf("%d", &price);

    if (price > cost) {
        float result = calculate_interest(price, cost);
        printf("Profit: %.2f%%\n", result);
    }
    else if (price < cost) {
        float result = calculate_interest(price, cost);
        printf("Loss: %.2f%%\n", result);
    }
    else {
        printf("No profit, no loss.\n");
    }

}
