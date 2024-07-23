//
// Created by HaejiK on 2024-07-23.
//
# include <stdio.h>
int main() {
    int number;
    printf("Enter the number");
    scanf("%d", &number);
    if (number % 5 == 0) {
        printf("number is divisible by 5");
    } else printf("cannot be divided by 5");
}