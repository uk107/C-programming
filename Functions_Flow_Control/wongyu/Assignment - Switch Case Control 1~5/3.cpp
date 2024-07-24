#include <stdio.h>

int main() {
    int day;

    printf("Enter the day of the week");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Happy Monday\n");
        break;
        case 2:
            printf("Happy Tuesday\n");
        break;
        case 3:
            printf("Happy Wednesday\n");
        break;
        case 4:
            printf("Happy Thursday\n");
        break;
        case 5:
            printf("Happy Friday\n");
        break;
        case 6:
            printf("Happy Saturday\n");
        break;
        case 7:
            printf("Happy Sunday\n");
        break;
        default:
            printf("Invalid day entered. Please enter a number between 1 and 7.\n");
        return 1;
    }

    return 0;
}
