//
// Created by HaejiK on 2024-07-23.
//
# include <stdio.h>
int main() {
    int number;
    printf("Enter the number\n");
    scanf("%d", &number);
    if (number & 1) {
        printf("number is odd");
    } else if (!(number & 1)){
        printf("number is even");
    }
}