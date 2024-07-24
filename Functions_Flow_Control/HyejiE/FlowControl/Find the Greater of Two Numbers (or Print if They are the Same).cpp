//
// Created by HaejiK on 2024-07-23.
//
# include <stdio.h>
int main() {
    int a, b;
    printf("Please enter two numbers to compare");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("%d is bigger than %d", a, b);
    } else if (a == b) {
        printf("The two numbers are equal to %d.", a);
    } else {
        printf("%d is bigger than %d", b,a);
    }
}