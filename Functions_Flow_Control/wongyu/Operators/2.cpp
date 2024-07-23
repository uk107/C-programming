#include <stdio.h>

int main() {
    float Fahrenheit;
    float Celsius;

    printf("Enter Fahrenheit: ");
    scanf("%f", &Fahrenheit);

    Celsius = (Fahrenheit - 32) * 5 / 9;
    printf("Celsius conversion: %.2f\n", Celsius);

    return 0;
}
