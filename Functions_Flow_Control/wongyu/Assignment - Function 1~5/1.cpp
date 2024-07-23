#include <stdio.h>
#define PI 3.14

// 함수 선언
float Calculation(float radius);

int main()
{
    float radius, Result;

    printf("Please enter a radius");
    scanf("%f", &radius);

    Result = Calculation(radius);

    printf("The area of the circle with radius %.2f is: %.2f\n", radius, Result);

    return 0;
}

float Calculation(float radius)
{
    return PI * radius * radius;
}
