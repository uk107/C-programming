//
// Created by MinseokK on 24. 7. 23.
//
// Find the Greatest Among Three Numbers (or Print if Any are the Same)

#include <stdio.h>
int main(){
    int number, number2, number3;
    printf("input the 2 number\n");

    printf("number_1 : \n");
    scanf("%d", &number);
    printf("number_2 : \n");
    scanf("%d", &number2);
    printf("number_3 : ");
    scanf("%d", &number3);

    if (number > number2 && number > number3) {
        printf("number_1 is bigger than number2, number3 ");
    }else if(number == number2 == number3) {
        printf("%d, %d, %d is same number", number, number2, number3);

    }
    else if(number2 > number3 && number2 > number){ // N2 > N3 || N2 > N1
        printf("number_2 is bigger than number1, number3");

    }else if(number3 > number2 && number3 > number) {
        printf("number_2 is bigger than number1, number3");


    }else {
        printf("Enter number plz");

    }
}