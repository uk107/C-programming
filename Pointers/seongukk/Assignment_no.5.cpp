//5. Find the Largest Number Between Two Numbers**: Write a program to find the larger of two numbers using pointers.
#include <stdio.h>

int FindBiggerNum(int *x, int *y){


    if(*x > *y){
        return *x;
    }
    else if(*y > *x){
        return *y;
    }
    else {
        printf("worng num");
    }
}

int main(){

    int x;
    int y;

    printf("write two numbers : ");
    scanf("%d %d",&x,&y);

    int bigger = FindBiggerNum(&x,&y);
    printf("bigger num is %d",bigger);

    return 0;
}