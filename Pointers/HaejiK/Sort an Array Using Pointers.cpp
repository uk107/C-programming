//
// Created by HaejiK on 2024-07-25.
//

#include <stdio.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubble_sort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void print_numbers(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ",arr[i]);
    }
}

int main(void) {
    int numbers[5] = {5,1,3,2,4};
    int num_len = sizeof(numbers) / sizeof(int);

    // Sort in ascending order using bubble sort
    bubble_sort(numbers, num_len);

    print_numbers(numbers, num_len);
}
