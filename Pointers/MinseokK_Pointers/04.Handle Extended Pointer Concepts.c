//
// Created by MinseokK on 24. 7. 25.
//
// Handle Extended Pointer Concepts

void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}
void printArr(int a[],const int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("%d ",a[i]);
    printf("\n");
}

void selectSort(int *arr, int len) {// {4,2,5,5,7,3} len =6
    int *ptr_arr = arr;
    int min;
    //int max[6]= {0,};
    //int previous;
    int temp;
    for(int i=0; i<len; i++) {
        //printf("%d\n", *(ptr_arr + i)); // 초기 array{4,2,5,5,7,3}
        min = i; // 0
        for (int j = i + 1; j < len; j++) {
            // 선정 위치 +1 부터 마지막 까지 비교
            if (arr[min] > arr[j]) {// i = 0, j = 1~5, 4 > 2 ture -> min = 2, 2 > 5 pass
                // i = 0 -> 4 > 2
                min = j; // i = 0, j = 1 == arr[1] =2
                }
        }
        if (min != i) { // J를 다 돌고 최소값이랑 i랑 같이 않으면 swap
            swap(&arr[i], &arr[min]); // [1], [2] == 2


        }
    }
}


void addArray(int **array, int *capacity) {
    //new arr 용량 늘리기
    // float *temp = (float *)realloc(*grades, *capacity * sizeof(float));
    *capacity *= 2;
    int *newArr = (int *)realloc(*array, *capacity * sizeof(int));
    if(newArr == NULL) {
        printf("Memory reallocation fail\n");
        free(*array);
        exit(1);
    }
    *array = newArr;
}

int main() {
    int *array = NULL; // 다이나믹 array NuLL의 주소 참조
    int currentSize = 0;
    int capacity = 1;     // 초기 용량
    int input;         // user input

    array = (int *)malloc(capacity * sizeof(int)); //동적 배열 초기화
    if (array == NULL) {
        printf("Eor\n");
        return 1;
    }
    printf("input Array number(-1 is finish) : : \n");
    while (1) {
        scanf("%d", &input);
        if(input == -1) {
            break;
        }
        if (currentSize == capacity) { // Size랑 capacity랑 같아지면 (용량이 같아 지면 배열 꽉참)
            addArray(&array, &capacity); //
        }

        array[currentSize++] = input;  // 배열을 만들고, 그 input 값을 넣음
    }

    selectSort(array, currentSize);
    printArr(array, currentSize);

}
