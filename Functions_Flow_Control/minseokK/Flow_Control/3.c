//
// Created by MinseokK on 24. 7. 23.
//
// Check if a Number is Divisible by 5
#include <stdio.h>
int main(){
    int number;
    printf("input number : ");
    scanf("%d", &number);

    if (number % 5 == 0) {
        printf("This number is Divisible by 5");
    }else {
        printf("This number is not Divisible by 5");
    }
}