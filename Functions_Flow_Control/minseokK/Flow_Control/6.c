//
// Created by MinseokK on 24. 7. 23.
//
// Find the Greater of Two Numbers (or Print if They are the Same)
#include <stdio.h>
int main(){
    int number, number2;
    printf("input the 2 number\n");

    printf("number_1 : \n");
    scanf("%d", &number);
    printf("number_2 : ");
    scanf("%d", &number2);

    if (number > number2) {
        printf("number_1 is bigger than number2 ");
    }else if(number == number2) {
        printf("%d, %d is same number", number, number2);

    }
    else {
        printf("number_2 is bigger than number1 ");
    }
}