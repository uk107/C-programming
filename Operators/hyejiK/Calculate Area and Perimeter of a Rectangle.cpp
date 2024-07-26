//
// Created by HaejiK on 2024-07-23.
//
# include <stdio.h>
int calculate_perimeter(int base, int height) {
    return (base + height) * 2;
}
int calcualte_area(int base, int height) {
    return base * height;
}

int main() {
    int base, height;
    printf("Please enter the base and height\n");
    scanf ("%d %d", &base, &height);
    int perimeter = calculate_perimeter(base, height);
    int area = calcualte_area(base, height);
    printf("perimeter is %d, area is %d", perimeter, area);
}