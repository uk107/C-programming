//
// Created by MinseokK on 24. 7. 23.
//
// base + - / * %
#include <stdio.h>

void add(int a, int b) {
    printf("result : %d", a + b);
}

void subtract(int a, int b) {
    printf("result : %d", a - b);
}

void mul(int a, int b) {
    printf("result : %d", a * b);
}

void div(int a, int b) {
    printf("result : %d", a / b);
}

int main() {
    int choice;
    int x, y;
    while(1) {
        printf("\nMenu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Mul\n");
        printf("4. Div\n");
        printf("5. End\n");
        printf("input number : ");
        scanf("%d", &choice);
        if (choice == 5) {
            printf("End\n");
            break;
        }

        printf("input 2 number : ");
        scanf("%d %d", &x, &y);
        switch (choice) {
            case 1:
                add(x, y);
            break;
            case 2:
                subtract(x, y);
            break;
            case 3:
                mul(x, y);
            break;
            case 4:
                div(x, y);
            break;
            default:
                printf("plz input number.\n");
        }
    }
}

