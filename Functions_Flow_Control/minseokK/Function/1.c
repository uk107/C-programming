//
// Created by MinseokK on 24. 7. 23.
//
// Function to Calculate the Area of a Circle

#include <stdio.h>

double calculateCircleArea(int radius) {
    const double PI = 3.14;
    double result = PI * (radius^2);
    return result;
}
int main(){
    int radius;
    printf("Circle radius input : ");
    scanf("%d", &radius);

    printf("The result is %f", calculateCircleArea(radius));

}