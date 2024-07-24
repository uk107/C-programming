#include <stdio.h>

float Calculation(float Money, float rate, float time) {
    return (Money * rate * time) / 100;
}

int main() {
    float Money, rate, time, result;

    printf("Enter money: ");
    scanf("%f", &Money);
    printf("Enter Period %%: ");
    scanf("%f", &rate);
    printf("Enter rate (Time in years): ");
    scanf("%f", &time);

    result = Calculation(Money, rate, time);

    printf("interest calculation: %.2f\n", result);

    return 0;
}
