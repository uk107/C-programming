#include <stdio.h>
#include <math.h>

float calculateCompoundInterest(float cost, float rate, float time) {
    float amount = cost * pow((1 + rate / 100), time);
    return amount - cost;
}

int main() {
    float cost, rate, time, interest;

    printf("Enter the cost: ");
    scanf("%f", &cost);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    interest = calculateCompoundInterest(cost, rate, time);

    printf("The interest is: %.2f\n", interest);

    return 0;
}
