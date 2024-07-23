//
// Created by HaejiK on 2024-07-23.
//
# include <stdio.h>
int main() {
    int number;
    printf("Enter the number");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("number is even");
    } else printf("number is odd");
}