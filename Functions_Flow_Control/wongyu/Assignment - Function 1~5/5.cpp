#include <stdio.h>

void print(int num) {
    int count = 0;
    int number = 1;

    while (count < num) {
        printf("%d ", number);
        number += 2;
        count++;
    }
    printf("\n");
}

int main() {
    int number;

    printf("Enter the number");
    scanf("%d", &number);


    if (number > 0) {
        print(number);
    } else {
        printf("The number must be a positive integer.\n");
    }

    return 0;
}
