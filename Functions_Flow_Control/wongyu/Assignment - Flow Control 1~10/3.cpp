#include <stdio.h>

int main()
{
    int number;
    printf("Enter number\n");
    scanf("%d", &number);

    if(number % 5 == 0) {
        printf("Dividing by 5\n");
    }
    else {
        printf("Not divided\n");
    }

}
