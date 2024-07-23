//
// Created by MinseokK on 24. 7. 23.
//
#include <stdio.h>
int main(){
    int number;
    printf("input number : ");
    scanf("%d", &number);

    if (((number/2) * 2 == number) == 1) {
        printf("Even");
    }else {
        printf("odd");
    }


}