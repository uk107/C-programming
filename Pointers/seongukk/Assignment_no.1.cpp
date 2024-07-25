// 1. **Swap Two Integer Values**: Write a function to swap the values of two integer variables using pointers.
#include <stdio.h>


void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {

    int x, y;
    printf("write two integers : ");
    scanf("%d %d", &x, &y);

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}