#include <stdio.h>
#include <math.h>

float calculateCompoundInterest(float principal, float rate, int timesCompounded, float time) {
    float amount = principal * pow((1 + rate / (100 * timesCompounded)), timesCompounded * time);
    return amount - principal;
}

int main() {
    float principal, rate, time, compoundInterest;
    int timesCompounded;


    printf("Enter the principal amount (Principal): ");
    scanf("%f", &principal);
    printf("Enter the annual interest rate (Rate of Interest in %%): ");
    scanf("%f", &rate);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &timesCompounded);
    printf("Enter Time in years: ");
    scanf("%f", &time);


    compoundInterest = calculateCompoundInterest(principal, rate, timesCompounded, time);

    printf("Calculated compound interest: %.2f\n", compoundInterest);

    return 0;
}
