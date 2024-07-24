#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int append_digit(int number, int digit) {
    return number * 10 + digit;
}

int main() {
    char number_a[100];
    char number_b[100];
    int a, b;
    printf("Enter two numbers");
    scanf("%d %d", &a,&b);

    // convert number -> string
    sprintf(number_a, "%d", a);
    sprintf(number_b, "%d", b);

    strcat(number_a, number_b);

    long result = strtol(number_a, NULL, 10);
    printf("%d", result);

}
