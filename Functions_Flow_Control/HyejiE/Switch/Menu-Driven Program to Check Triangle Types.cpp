#include <stdio.h>


void check_triangle_type(int a, int b, int c);

int main() {
    int choice, a, b, c;

    while (1) {
        printf("Menu:\n");
        printf("1. Check Triangle Type\n");
        printf("2. Exit\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &choice);

        if (choice == 2) {
            printf("Exit the code.\n");
            break;
        } else if (choice == 1) {
            printf("Enter the lengths of the three sides of the triangle:\n");
            printf("Side a: ");
            scanf("%d", &a);
            printf("Side b: ");
            scanf("%d", &b);
            printf("Side c: ");
            scanf("%d", &c);

            check_triangle_type(a, b, c);
        } else {
            printf("Invalid choice. Please enter 1 or 2.\n");
        }
    }

    return 0;
}

void check_triangle_type(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid input. Side lengths must be positive.\n");
    } else if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("The triangle is an Equilateral Triangle.\n");
        } else if (a == b || b == c || a == c) {
            printf("The triangle is an Isosceles Triangle.\n");
        } else {
            printf("The triangle is a Scalene Triangle.\n");
        }
    } else {
        printf("The given lengths do not form a triangle.\n");
    }
}
