//
// Created by MinseokK on 24. 7. 23.
//
// Calculate Area and Perimeter of a Rectangle
#include <stdio.h>

int main(){
    int height, width;

    printf("input the Height, Width \n");
    printf("Height : \n");
    scanf("%d", &height);
    printf("Width : \n");
    scanf("%d", &width);

    printf("Area is = %d\n", height * width);
    printf("Perimeter is = %d", height*2 + width*2);

}