#include <stdio.h>
#include <string.h>

// 문자열을 바꾸는 함수
void change(char *arr1, char *arr2) {
    char temp[100]; // 임시 배열을 선언합니다. (100은 임시로 설정한 값입니다.)


    // 문자열 변경 진행
    strcpy(temp, arr1);
    strcpy(arr1, arr2);
    strcpy(arr2, temp);
}

int main() {
    int number;
    printf("Enter Max String ");
    scanf("%d", &number);


    char ch1[number + 1];
    char ch2[number + 1];

    // 문자열을 입력받습니다.
    printf("frist string: ");
    scanf("%s", ch1);
    printf("second string: ");
    scanf("%s", ch2);

    // 입력된 문자열을 출력합니다.
    printf("\n frist: %s", ch1);
    printf("\n second: %s", ch2);

    // 문자열을 바꾸는 함수를 호출합니다.
    change(ch1, ch2);

    // 변경된 문자열을 출력합니다.
    printf("\n changed frist string: %s", ch1);
    printf("\n changed second string: %s", ch2);

    return 0;
}
