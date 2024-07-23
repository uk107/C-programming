#include <stdio.h>

void print(int number) {
    for (int i = 1; i <= number; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter a natural number: ");
    scanf("%d", &number);

    if (number > 0) {
        print(number);
    } else {
        printf("The number is not a natural number. Please enter a positive integer.\n");
    }

    return 0;
}
