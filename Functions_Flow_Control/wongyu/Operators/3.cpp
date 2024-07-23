#include <stdio.h>

int main() {
    float meters, feet;

    printf("enter meters: ");
    scanf("%f", &meters);

    feet = meters * 3.28084;  // 1 미터 = 3.28084 피트
    printf("%.2f feet.\n", feet);

    return 0;
}
