//
// Created by HaejiK on 2024-07-26.
//
# include <stdio.h>

/*
 * If it is a leap year,
 * an exception must be made
 * because February 29th exists.
 */

int check_is_leap_year(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int month;
    int year;

    // Enter additional year to check leap year
    printf("Please enter the year to check\n");
    scanf("%d", &year);
    printf("Please enter the month to check\n");
    scanf("%d", &month);

    int flag = check_is_leap_year(year);

    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days\n");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days\n");
        break;

        /* If the month of February is entered,
        the 29th is output if it is a leap year */
        case 2:
            if (flag) {
                printf("29 days\n");
            }
            else {
                printf("28 days\n");
            }
        break;
        default:
            printf("Wrong month\n");
        break;
    }
}