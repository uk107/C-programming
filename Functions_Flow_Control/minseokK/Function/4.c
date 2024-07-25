//
// Created by MinseokK on 24. 7. 23.
//
// Function to Print the First N Natural Numbers (TSRN)
#include <stdio.h>

void PrintNumber(int n) {
    for(int i = 1; i<=n; i++) {
        printf("%d", i);
        printf(" ");
    }
}

int main() {
    int n;
    printf("input N : ");
    scanf("%d", &n);

    if (n > 0) {
        PrintNumber(n);
    }else {
        printf("F");
    }
}