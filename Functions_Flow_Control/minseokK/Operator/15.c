//
// Created by MinseokK on 24. 7. 23.
//
// odd, even check using bitwise operator


#include <stdio.h>

int main() {
    int n; // 0001 4 -> 0100, 6 -> 0110, 8 -> 1000, 10 -> 1010, 9 -> 1001
    // 0001
    // 1001
    // 0001
    // 9 & 1 == 1
    // 0010
    // 0001
    // 2 & 1 == 0
    printf("input number : ");
    scanf("%d", &n);
    int result = n & 1;
    if (result == 1) {
        printf("Odd");
    }else {
        printf("Even");
    }

}