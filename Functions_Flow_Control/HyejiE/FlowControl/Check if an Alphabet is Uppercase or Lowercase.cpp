//
// Created by HaejiK on 2024-07-23.
//
# include <stdio.h>
int main() {
    char alpha;

    printf("Enter the alpha\n");
    scanf("%c", &alpha);

    if ('a' <= alpha && alpha <= 'z') {
        printf("%c is lower", alpha);
    } else if ('A' <= alpha && alpha <= 'Z') {
        printf("%c is upper", alpha);
    } else {
        printf("not a text");
    }
}