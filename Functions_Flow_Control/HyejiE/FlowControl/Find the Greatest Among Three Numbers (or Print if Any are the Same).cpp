//
// Created by HaejiK on 2024-07-23.
//
# include <stdio.h>
int main() {
    int a, b, c;
    printf("Please enter three numbers to compare\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c) {
        printf("All three numbers are equal to %d", a);
    } else {
        int max = a;
        if (max < b) {
            max = b;
        }
        if (max < c){
            max = c;
        }
        printf("%d is greatest", max);
    }

}