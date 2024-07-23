//
// Created by MinseokK on 24. 7. 23.
//
// Check if a Year is a Leap Year

#include <stdio.h>
int main(){
    int year;
    printf("input the year : ");
    scanf("%d", &year);

    if(year % 4 == 0 || year % 400 == 0) {
        printf("%d is Leap Year", year);
    }else if(year % 100 == 0) {
        printf("%d is not Leap Year", year);
    }else {
        printf("%d is not Leap Year", year);
    }

}