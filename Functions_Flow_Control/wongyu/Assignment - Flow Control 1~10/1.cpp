#include <stdio.h>

int main()
{
    int number;
    printf("Enter number\n");
    scanf("%d", &number);
    if(number % 2 == 0) {
        printf("Even\n");
    }
    else {
        printf("Odd\n");
    }

}
