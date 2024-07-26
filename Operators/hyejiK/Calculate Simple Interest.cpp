#include <stdio.h>

float calculateSimpleInterest(float cost, float rate, float time) {
    return (cost * rate * time) / 100;
}

int main() {
    float cost, rate, time, interest;

    printf("Enter the cost: ");
    scanf("%f", &cost);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the period (in years): ");
    scanf("%f", &time);

    interest = calculateSimpleInterest(cost, rate, time);

    printf("interest is: %.2f\n", interest);

    return 0;
}
