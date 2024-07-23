#include <stdio.h>

int main()
{
    int number;
    printf("Enter number\n");
    scanf("%d", &number);

    if(number>0 ) {
        printf("Positive\n");
    }
    else if(number<0){
        printf("Non-Positive\n");
    }
    else{
        printf("number 0\n");
    }
}
