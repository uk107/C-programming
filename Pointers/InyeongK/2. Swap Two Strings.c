#include <stdio.h>

void swap(char *a, char *b) {
    
    char temp;

    //If the value is \0, the location is end of the string.
    while (*a != '\0' || *b != '\0') {
        temp = *a;
        *a = *b;
        *b = temp;

        a++;
        b++;
    }
}

int main() {
    char x[100], y[100];

    printf("Enter two strings: ");
    scanf("%s %s", &x, &y);

    printf("Before : x = %s, y = %s\n", x, y);
    swap(&x, &y);

    printf("After : x = %s, y = %s\n", x, y);

    return 0;
}
