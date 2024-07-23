#include <stdio.h>

void check(int number) {
    if (number % 2 == 0) {
        printf("%d even\n", number);
    } else {
        printf("%d odd\n", number);
    }
}

int main() {
    int number;

    printf("enter number: ");
    scanf("%d", &number);

    check(number);

    return 0;
}
