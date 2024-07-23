#include <stdio.h>

int check(int number) {
    if (number % 2 == 0) {
        return 1; // 짝수
    } else {
        return 0; // 홀수
    }
}

int main() {
    int number;

    printf("enter number: ");
    scanf("%d", &number);

    if (check(number)) {
        printf("%d even\n", number);
    } else {
        printf("%d odd\n", number);
    }

    return 0;
}
