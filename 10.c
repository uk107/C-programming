#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);


    if (ch >= 'A' && ch <= 'Z') {
        printf("%c uppercase letter", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c lowercase letter", ch);
    } else {
        printf("%c is error", ch);
    }

    return 0;
}
