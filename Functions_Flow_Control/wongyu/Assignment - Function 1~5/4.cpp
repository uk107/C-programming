#include <stdio.h>

int print_numbers(int number) {
    for (int i = 1; i <= number; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return number;
}

int main() {
    int number;
    printf("Enter a natural number: ");
    scanf("%d", &number);

    if (number > 0) {
        print_numbers(number);
    } else {
        printf("The number is not a natural number. Please enter a positive integer.\n");
    }

    return 0;
}
