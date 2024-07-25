#include <stdio.h>

int main() {
    int inter,value1, value2, result;

    printf("Please enter two values to calculate: ");
    scanf("%d %d",&value1,&value2);


    printf("-----------------------------------------------------------------------------\n");
    printf("1.+\n");
    printf("2.-\n");
    printf("3.x\n");
    printf("4./\n");
    printf("-----------------------------------------------------------------------------\n ");

    scanf("%d",&inter);
    switch (inter) {
        case 1:
            printf("Addition Results %d",value1+value2);
        break;
        case 2:
            printf("Subtraction Results %d",value1-value2);
        break;
        case 3:
            printf("Multiplication Results %d", value1*value2);
        break;
        case 4:
            printf("result of division %d",value1/value2 );
    }


    return 0;
}
