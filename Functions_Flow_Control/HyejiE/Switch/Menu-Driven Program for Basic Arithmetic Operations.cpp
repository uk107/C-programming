//
// Created by HaejiK on 2024-07-23.
//

# include <stdio.h>
int main() {
    int operation;
    float num1, num2, result;

    while (1) {
        printf("================menu==============");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide \n");
        printf("5. Quit\n");
        printf("Select an operation: ");
        scanf("%d", &operation);

        if (operation == 5) {
            printf("Exit the program.\n");
            break;
        }

        // 두 숫자 입력
        printf("Please enter the first number: ");
        scanf("%f", &num1);
        printf("Please enter the second number: ");
        scanf("%f", &num2);

        // 선택한 연산에 따라 계산
        switch (operation) {
            case 1:
                result = num1 + num2;
            printf("result: %.2f\n", result);
            break;
            case 2:
                result = num1 - num2;
            printf("result: %.2f\n", result);
            break;
            case 3:
                result = num1 * num2;
            printf("result: %.2f\n", result);
            break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("result: %.2f\n", result);
                } else {
                    printf("cannot be divided by 0.\n");
                }
            break;
            default:
                printf("Please select again.\n");
            break;
        }
    }
}