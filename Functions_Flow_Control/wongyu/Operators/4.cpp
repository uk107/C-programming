#include <stdio.h>

int main() {
    float feet, meters;

    printf("enter feet: ");
    scanf("%f", &feet);

    meters = feet / 3.28084;  // 1 피트 = 0.3048 미터
    printf("%.2f meters\n", meters);

    return 0;
}
