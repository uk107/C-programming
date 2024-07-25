#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    char result[200];

    // 첫 번째 문자열 입력받기
    printf("Enter first number: ");
    scanf("%s", str1);

    printf("Enter second number: ");
    scanf("%s", str2);

    strcpy(result, str1);
    strcat(result, str2);

    printf("Concatenated number: %s\n", result);

    return 0;
}
