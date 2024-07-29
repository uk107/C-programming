#include <stdio.h>

void find_max(int *num1,int *num2,int *max) {

    if(*num1>*num2){

        *max=*num1;
    }
    else{
        *max=*num2;

    }
}

int main() {
    int num1,num2,max;
    printf("Enter frist number");
    scanf("%d",&num1);
    printf("Enter sceond number");
    scanf("%d",&num2);
    find_max(&num1,&num2,&max);

    printf("last numner %d",max);

    return 0;
}
