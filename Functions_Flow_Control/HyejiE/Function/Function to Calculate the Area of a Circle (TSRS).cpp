
# include <stdio.h>
# define PI 3.14
int calculate_radius(int radius) {
    return ((float) radius * (float) radius * PI);
}

int main() {
    int radius;
    float result;
    scanf("%d", &radius);
    result = calculate_radius(radius);
    printf("%.2f", result);
}
