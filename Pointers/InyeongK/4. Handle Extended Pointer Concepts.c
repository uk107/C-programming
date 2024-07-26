#include <stdio.h>
#include <stdlib.h>

void pointerToPointer() {

    printf(" == Pointer-to-Pointer == \n");

    int value;
    printf("Enter a number : ");
    scanf("%d", &value);

    int *ptr = &value;  // int pointer
    int **pptr = &ptr;  // int pointer pointer

    int changedValue;
    printf("Enter one more number : ");
    scanf("%d", &changedValue);
    **pptr = changedValue;

    printf("Changed value : %d\n", **pptr);

}

void pointerArithmetic() {

    printf(" == Pointer Arithmetic == \n");

    int arr[100];
    int *ptr = arr;
    int value;

    printf("Enter a integer 1 ~ 9 (If you want to exit, enter 0) \n");

    while (ptr < arr + 100) {
        printf("Element %ld: ", ptr - arr + 1);
        scanf("%d", &value);

        if (value == 0) {
            break;
        }

        if (value < 1 || value > 9) {
            printf("Invalid value!\n");
            continue;
        }

        *ptr = value;
        ptr++;  // move pointer to next
    }

    printf("Pointer Arithmatic :\n");
    for (int *p = arr; p < ptr; p++) {
        printf("%d ", *p);  // get each element
    }
    printf("\n");
}

void dynamicMemoryAllocation() {

    printf(" == Dynamic Memory Allocation == \n");
    
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }

    free(arr);
}

int main() {

    pointerToPointer();

    pointerArithmetic();

    dynamicMemoryAllocation();

    return 0;
}
