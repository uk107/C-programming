//
// Created by MinseokK on 24. 7. 25.
//
// Sort an Array Using Pointers
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
            swap(&arr[i], &arr[min]); // [1], [2] == 2
        }
    }
}


int main() {
    int array[6] = {4,2,5,5,7,3}; // 30
    int len;
    for(int i = 0;i < 6;i++) {
        //printf("%d\n", *(ptr+i));
        len += 1;
    }
    printf("%d\n", len);
    selectSort(array, len);

    printArr(array, len);


}
