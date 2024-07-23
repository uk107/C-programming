#include <stdio.h>

int main() {
    int Celsius;
    float Fahrenheit;

    printf("Enter Celsius: ");
    scanf("%d", &Celsius);

    Fahrenheit = (Celsius * 9.0 / 5.0) + 32;

    printf("Fahrenheit: %.2f\n", Fahrenheit);

    return 0;
}
