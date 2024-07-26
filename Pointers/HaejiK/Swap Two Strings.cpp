//
// Created by HaejiK on 2024-07-25.
//

#include <stdio.h>

/*Change the string by receiving the address
 *values of *a and *b that point to the string*/
void swap(char **a, char **b) {
    char *tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void) {

    char *a = "hello";
    char *b = "hyeji";

    swap(&a, &b);
    printf("%s %s\n", a, b);
}