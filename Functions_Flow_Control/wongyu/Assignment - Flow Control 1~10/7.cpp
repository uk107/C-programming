#include <stdio.h>

int main()
{
    int number, number1, number2;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &number, &number1, &number2);


    if (number == number1 && number1 == number2) {
        printf("All numbers are the same: %d\n", number);
    } else if (number > number1 && number > number2) {
        printf("The largest number is: %d\n", number);
    } else if (number1 > number && number1 > number2) {
        printf("The largest number is: %d\n", number1);
    } else {
        printf("The largest number is: %d\n", number2);
    }

    return 0;
}
