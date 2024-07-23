#include <stdio.h>

// num 개의 홀수를 출력하고, 마지막 홀수를 반환하는 함수
int print_and_return_last_odd(int num) {
    int count = 0;
    int number = 1;
    int last_odd = 0;

    while (count < num) {
        printf("%d ", number);
        last_odd = number;
        number += 2;
        count++;
    }
    printf("\n");

    return last_odd;
}

int main() {
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    if (number > 0) {
        int last_odd = print_and_return_last_odd(number);
        printf("The last odd number printed was %d\n", last_odd);
    } else {
        printf("The number must be a positive integer.\n");
    }

    return 0;
}
