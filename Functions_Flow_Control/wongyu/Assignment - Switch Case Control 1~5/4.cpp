#include <stdio.h>

void checkTriangle(float lenth1, float lenth2, float lenth3) {

    if (lenth1 + lenth2 > lenth3 && lenth1 + lenth3 > lenth2 && lenth2 + lenth3 > lenth1) {
        // 삼각형이 유효할 때
        if (lenth1 == lenth2 && lenth2 == lenth3) {
            printf("an equilateral triangle\n");
        } else if (lenth1 == lenth2 || lenth2 == lenth3 || lenth1 == lenth3) {
            printf("Isosceles triangle\n");
        }
    } else {
        printf("Unable to create triangle\n");
    }
}

int main() {
    int inter;
    float lenth1,lenth2, lenth3;

    do {
        // 메뉴 표시
        printf("\nmenu:\n");
        printf("1. Type of triangle\n");
        printf("2. exit\n");
        scanf("%d", &inter);

        switch (inter) {
            case 1:
                // 삼각형의 변의 길이 입력
                    printf(" a leanth: ");
            scanf("%f", &lenth1);
            printf(" b leanth: ");
            scanf("%f", &lenth2);
            printf(" c leanth: ");
            scanf("%f", &lenth3);

            checkTriangle(lenth1, lenth2, lenth3);
            break;

            case 2:
                printf("exit.\n");
            break;

            default:
                printf("repeat\n");
        }
    } while (inter != 2);

    return 0;
}