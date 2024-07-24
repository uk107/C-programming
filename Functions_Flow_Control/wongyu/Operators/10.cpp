#include <stdio.h>

float calculate1(float length, float width) {
    return length * width;
}

float calculate2(float length, float width) {
    return 2 * (length + width);
}

int main() {
    float length, width, area, perimeter;

    printf("length ");
    scanf("%f", &length);
    printf("width: ");
    scanf("%f", &width);

    area = calculate1(length, width);
    perimeter = calculate2(length, width);

    printf("area %.2f\n", area);
    printf("perimeter: %.2f\n", perimeter);

    return 0;
}
