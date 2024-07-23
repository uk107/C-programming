#include <stdio.h>

int main()
{
    float purchaseprice, sellingPrice, profitOrLoss, per;

    printf("Enter the Cost Price: ");
    scanf("%f", &purchaseprice);

    printf("Enter the Selling Price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > purchaseprice) {

        profitOrLoss = sellingPrice - purchaseprice;
        per = (profitOrLoss / purchaseprice) * 100;
        printf("Profit: %.2f%%\n", per);
    } else if (sellingPrice < purchaseprice) {

        profitOrLoss = purchaseprice - sellingPrice;
        per = (profitOrLoss / purchaseprice) * 100;
        printf("Loss: %.2f%%\n", per);
    } else {

        printf("No Profit, No Loss\n");
    }

    return 0;
}
