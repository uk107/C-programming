//
// Created by MinseokK on 24. 7. 23.
//
// Check if a Number is Even or Odd
#include <stdio.h>
int main(){
    int number;
    printf("input number : ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("this number is Even");
    }else {
        printf("this number is Odd");
    }

}
