#include <stdio.h>

int main()
{
    int number, number1;
    printf("Enter Two number\n");
    scanf("%d", &number);
    scanf("%d", &number1);

    if(number<number1){

        printf("The second number is bigger %d",number1);
    }
    else if(number>number1){
        printf("The first number is bigger %d",number);
    }
    else{
        printf("The two figures are the same %d %d",number,number1);
    }
}
