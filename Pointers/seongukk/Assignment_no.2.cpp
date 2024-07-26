//2. **Swap Two Strings**: Write a function to swap the contents of two character arrays (strings) using pointers.
#include <stdio.h>

void SwapChar(char *a, char *b) {
    char tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {

    char x,y;
    printf("write two characters : ");
    scanf("%c %c", &x,&y);


    printf("Before swap: ch1 = %c, ch2 = %c\n", x, y);


    SwapChar(&x, &y);


    printf("After swap: ch1 = %c, ch2 = %c\n", x, y);

    return 0;
}
