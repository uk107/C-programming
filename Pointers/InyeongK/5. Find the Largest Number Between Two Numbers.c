#include <stdio.h>

void findLargestNumber(int *a, int *b, int *larger) {
    if (*a > *b) {
        *larger = *a;
    } else {
        *larger = *b;
    }
}

int main() {
    int num1, num2, larger;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    findLargestNumber(&num1, &num2, &larger);

    printf("Largest number: %d\n", larger);

    return 0;
}
