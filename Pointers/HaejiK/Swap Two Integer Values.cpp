//
// Created by HaejiK on 2024-07-25.
//

#include <stdio.h>

/*Temporarily store the value a in the temporary
variable tmp and change the value using the pointer.*/
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void) {
    int a = 10;
    int b = 20;

    // Pass the address value
    swap(&a, &b);
    printf("%d %d", a, b);
}