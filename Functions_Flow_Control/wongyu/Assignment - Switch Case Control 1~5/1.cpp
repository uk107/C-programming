#include <stdio.h>

int main() {
    int month;
    int days;


    printf("Enter the month (1-12): ");
    scanf("%d", &month);


    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
        break;
        case 4: case 6: case 9: case 11:
            days = 30;
        break;
        case 2:
            days = 28;
        break;
        default:
            printf("Invalid month entered.\n");
        return 1;
    }

    printf("Month %d // %d days.\n", month, days);

    return 0;
}
