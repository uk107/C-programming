//
// Created by HaejiK on 2024-07-23.
//
# include <stdio.h>
int main() {
    int number;
    printf("Enter the number");
    scanf("%d", &number);
    if (number >= 100 && number < 1000) {
        printf("Number is three-digit");
    } else printf("Number is not three-digit");
}