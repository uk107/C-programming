//
// Created by MinseokK on 24. 7. 23.
//
// Display Number of Days in a Month
#include <stdio.h>

int main() {
    int month;

    printf("input munth : ");
    scanf("%d", &month);

    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31\n");
        break;
        case 4: case 6: case 9: case 11:
        printf("30\n");
        break;
        case 2:
            printf("28");
        break;
        default:
            printf("Error");
    }

}