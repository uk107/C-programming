//2. **Swap Two Strings**: Write a function to swap the contents of two character arrays (strings) using pointers.
#include <stdio.h>

void swap(char **a, char **b) {
    char *tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void) {

    char *a = "kim";
    char *b = "seonguk";

    swap(&a, &b);
    printf("%s %s\n", a, b);
    return 0;
}
