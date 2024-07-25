#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two integer numbers : ");
    scanf("%d %d", &x, &y);

    printf("Before : x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After : x = %d, y = %d\n", x, y);

    return 0;
}
