// 3. **Sort an Array Using Pointers**: Implement a function to sort an array of integers in ascending order using pointers.
#include <stdio.h>

void swap(int *a, int *b) {  ////swap function
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort(int *arr, int size) {        /////function of bubblesort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {

            if (*(arr + j) > *(arr + j + 1)) {
                swap(arr + j, arr + j + 1);
            }
        }
    }
}

void printArray(int *arr, int size) {  /////statement of array
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int array[] = {1, 5, 6, 3, 4, 9, 2};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Before array :\n");
    printArray(array, size);


    bubbleSort(array, size);

    printf("After array :\n");
    printArray(array, size);

    return 0;
}
