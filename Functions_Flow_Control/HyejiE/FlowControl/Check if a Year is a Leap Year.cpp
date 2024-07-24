//
// Created by HaejiK on 2024-07-23.
//
# include <stdio.h>
int main() {
    int year;
    printf("Please enter the year you want to check\n");
    scanf("%d", &year);
    if (year % 4 == 0) {
        printf("It's a leap year");
    } else {
        printf("It's not a leap year");
    }
}