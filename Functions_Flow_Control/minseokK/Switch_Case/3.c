//
// Created by MinseokK on 24. 7. 23.
//
#include <stdio.h>

void hi_day(int day) {
    switch (day) {
        case 1:
            printf("happy Mon\n");
        break;
        case 2:
            printf("Happy Tuesday.\n");
        break;
        case 3:
            printf("Wonderful Wednesday\n");
        break;
        case 4:
            printf("good Thursday!\n");
        break;
        case 5:
            printf("Fantastic Friday!\n");
        break;
        case 6:
            printf("Superb Saturday!\n");
        break;
        case 7:
            printf("nice Sunday!\n");
        break;
        default:
            printf("enter day\n");
    }
}

int main() {
    int day;

    printf("enter your day : ");
    scanf("%d", &day);

    hi_day(day);

    return 0;
}
