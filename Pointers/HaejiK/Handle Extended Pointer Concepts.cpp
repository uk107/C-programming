//
// Created by HaejiK on 2024-07-25.
//

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void) {

    // 1. pointer-to-pointer
    int a = 10;
    int *p = &a;
    int **pp = &p;

    // 2. Pointer arithmetic
    int numbers[SIZE] = {1, 2, 3, 4, 5};
    int *ptr = numbers; // Pointer to the first element of the array

    printf("Pointer arithmetic:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("arr[%d] = %d, *(ptr + %d) = %d, ptr + %d = %p\n",
               i, numbers[i], i, *(ptr + i), i, (void *)(ptr + i));
    }


    // 3. Dynamic memory allocation
    int *arr = (int *)malloc(SIZE * sizeof(int)); // Allocate memory for 5 integers
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return -1;
    }

    // Insert value into allocated space
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i + 1;
    }

    printf("\nDynamic memory allocation:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("dyn_arr[%d] = %d, Address = %p\n", i, arr[i], (void *)&arr[i]);
    }

    // Free for prevent memory leak
    free(arr);

    return 0;
}
