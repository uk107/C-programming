#include <stdio.h>

int main() {
    int inter;
    printf("Enter an integer: ");
    scanf("%d", &inter);

    // if-else-if 문
    printf("Using if-else-if:\n");
    if (inter == 1) {
        printf("You entered One.\n");
    } else if (inter == 2) {
        printf("You entered Two.\n");
    } else if (inter == 3) {
        printf("You entered Three.\n");
    } else {
        printf("You entered a number other than 1, 2, or 3.\n");
    }

    // switch-case 문
    printf("Using switch-case:\n");
    switch (inter) {
        case 1:
            printf("You entered One.\n");
        break;
        case 2:
            printf("You entered Two.\n");
        break;
        case 3:
            printf("You entered Three.\n");
        break;
        default:
            printf("You entered a number other than 1, 2, or 3.\n");
        break;
    }

    return 0;
}
