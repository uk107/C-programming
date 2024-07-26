#include <stdio.h>

void sort(int *arr,int size) {

    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
            // swap - change small element to big element
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {

    int x[100];

    printf("Enter a integer 1 ~ 9 (If you want to exit, enter 0) \n");
    int idx = 0;
    while(idx < 100){
        int temp;
        scanf("%d", &temp);

        if(temp == 0) break;

        x[idx] = temp;

        idx++;

    }

    printf("Before : ");
    for(int i=0; i<idx; i++){
        printf("%d ", x[i]);
    }

    sort(x, idx);
    
    printf("\nAfter : ");
    for (int i = 0; i < idx; i++) {
        printf("%d ", *(x + i));
    }

    return 0;

}
