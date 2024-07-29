//4. Handle Extended Pointer Concepts**: Write a C program demonstrating advanced pointer concepts such as pointer-to-pointer, pointer arithmetic, or dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>

int main() {

    int p = 10;
    int *ptr = &p;
    int **ptr_to_ptr = &ptr;

    printf("p is : %d\n", p);
    printf("p using ptr: %d\n", *ptr);
    printf("p using ptr_to_ptr: %d\n", **ptr_to_ptr);


    int arr[5] = {1, 2, 3, 4, 5};
    int *a = arr;

    printf("Array values using pointer :\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(a + i));
    }


    int n = 5;
    int *dynamic_arr = (int *)malloc(n * sizeof(int)); \

    if (dynamic_arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }


    for (int i = 0; i < n; i++) {
        dynamic_arr[i] = i + 1;
    }

    printf("Dynamic array values:\n");
    for (int i = 0; i < n; i++) {
        printf("dynamic_arr[%d] = %d\n", i, dynamic_arr[i]);
    }


    free(dynamic_arr);

    return 0;
}
