//
// Created by HaejiK on 2024-07-23.
//
# include <stdio.h>
int main() {
    int month;
    printf("Please enter the month for which you want to check the number of days.\n");
    scanf("%d", &month);

    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31days\n");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days\n");
        break;
        case 2:
            printf("28 days\n");
        break;
        default:
            printf("Wrong month\n");
        break;
    }
}