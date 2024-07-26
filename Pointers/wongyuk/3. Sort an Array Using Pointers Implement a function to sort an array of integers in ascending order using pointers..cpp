#include <stdio.h>
#include <stdlib.h>

// 버블 정렬 함수 (포인터 사용)
void bubbleSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // 인접한 두 원소 비교 및 교환
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

// 배열 출력 함수
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int num;

    // 사용자로부터 배열 크기 입력받기
    printf("max number: ");
    scanf("%d", &num);

    // 배열 메모리 동적 할당
    int *arr = (int *)malloc(num * sizeof(int));



    // 배열에 숫자 입력받기
    printf("enter number: \n");
    for (int i = 0; i < num; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", (arr + i));
    }

    // 정렬 전 배열 출력
    printf("befor: ");
    printArray(arr, num);

    // 배열 정렬
    bubbleSort(arr, num);

    // 정렬 후 배열 출력
    printf("after: ");
    printArray(arr, num);

    // 메모리 해제
    free(arr);

    return 0;
}
