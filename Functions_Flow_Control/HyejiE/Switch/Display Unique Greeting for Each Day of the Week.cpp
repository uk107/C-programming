//
// Created by HaejiK on 2024-07-23.
//
# include <stdio.h>
int main() {
    int day;
    while (1) {
        printf("Enter the day\n");
        scanf("%d", &day);
        if (day == 0) {
            printf("Exit the code");
            break;
        }
        switch(day) {
            case 1:
                printf("Happy Monday ~~~!\n");
            break;
            case 2:
                printf("Happy Tuesday ~~~!\n");
            break;
            case 3:
                printf("Happy Wednesday ~~~!\n");
            break;
            case 4:
                printf("Happy Thursday ~~~!\n");
            break;
            case 5:
                printf("Happy Friday ~~~~!\n");
            break;
            case 6:
                printf("Happy Saturday ~~~!\n");
            break;
            case 7:
                printf("Happy Sunday ~~~~!\n");
            break;
        }
    }


}