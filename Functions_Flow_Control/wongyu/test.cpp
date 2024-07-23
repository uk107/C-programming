#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    char result[200];

    // 첫 번째 문자열 입력받기
    printf("Enter first number: ");
    scanf("%s", str1);

    // 두 번째 문자열 입력받기
    printf("Enter second number: ");
    scanf("%s", str2);

    // 문자열 합치기
    strcpy(result, str1);
    strcat(result, str2);

    // 결과 출력
    printf("Concatenated number: %s\n", result);

    return 0;
}
