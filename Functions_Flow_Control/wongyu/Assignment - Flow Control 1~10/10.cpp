#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (islower(ch)) {
        printf("The character '%c' is a lowercase letter.\n", ch);
    } else if (isupper(ch)) {
        printf("The character '%c' is an uppercase letter.\n", ch);
    } else {
        printf("The character '%c' is not an alphabet letter.\n", ch);
    }

    return 0;
}
