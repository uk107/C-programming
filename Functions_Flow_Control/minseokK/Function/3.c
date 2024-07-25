//
// Created by MinseokK on 24. 7. 23.
//
// Function to Check if a Number is Even or Odd (TSRS)
#include <stdio.h>
char* OddEven(int number) {

    if (number % 2==0) {
        return "Even";
    }else {
        return "Odd";
    }
}
int main() {
    int number;
    printf("check Even or Odd : ");
    scanf("%d", &number);
    printf("%s", OddEven(number));

}

