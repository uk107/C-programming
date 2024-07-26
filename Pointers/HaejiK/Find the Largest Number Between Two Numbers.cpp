//
// Created by HaejiK on 2024-07-25.
//

#include <stdio.h>
#include <stdlib.h>

/*
 * Find bigger number using pointer
*/
int find_max_value(int *a, int *b) {
    if (*a > *b) {
        return *a;
    } else {
        return *b;
    }
}

int main(void) {
    int a,b;

    printf("Please enter two numbers to compare\n");
    scanf("%d",&a);
    scanf("%d",&b);

    int max_val = find_max_value(&a, &b);
    printf("%d",max_val);
}
