#include <stdio.h>
#include <stdlib.h>

void swap(int **value1, int **value2) {
    int corrent = **value1;
    **value1 = **value2;
    **value2 = corrent;
}

int main() {

    int value1, value2;

    printf("Enter the first: ");
    scanf("%d", &value1);

    printf("Enter the second: ");
    scanf("%d", &value2);

    // 포인터 선언 및 초기화
    int *p1 = &value1;
    int *p2 = &value2;

    printf("Before swap:\n");
    printf("x = %d\n", value1);
    printf("y = %d\n", value2);

    // 이중 포인터를 사용하여 스왑 함수 호출
    swap(&p1, &p2);

    printf("After swap:\n");
    printf("x = %d\n", value1);
    printf("y = %d\n", value2);


    int repeat;
    printf("Enter repeat");
    scanf_s("%d",&repeat);

    int *Array = (int *)malloc(repeat * sizeof(int));

    if (Array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < repeat; i++) {
        Array[i] = i * 10;
    }

    printf("array elements:\n");
    for (int i = 0; i < repeat; i++) {
        printf("Element %d: %d\n", i, Array[i]);
    }

    free(Array);

    return 0;
}

