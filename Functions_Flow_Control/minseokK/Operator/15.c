//
// Created by MinseokK on 24. 7. 23.
//
// odd, even check using bitwise operator
/*
 * bitwise
 * & - 비트단위로 AND 연산
 * | - 비트단위로 OR 연산
 * ^ - 비트단위로 XOR 연산
 * ~ - 단항 연산자로 피연산자의 모든 비트 반전
 * << - 피연산자 비트 왼쪽이동
 * >> - 오른쪽 이동
 */


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