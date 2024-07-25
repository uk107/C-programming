#include <stdio.h>

void one(int m){

    int days;

    switch (m) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            days = 28;
            break;
        default:
            printf("Please enter a number between 1 and 12. \n");
            return;
    }

    printf("The number of days in %d month : %d \n", m, days);

}

typedef struct twoNum{
    int first;
    int second;
}twoNums;

twoNums getInput();
void add();
void subtract();
void multiply();
void divide();

void two(){

    while(1){

        printf("Choose an calculating option . . . \n");
        printf("1. Add  2. Sub  3. Mul  4. Div  9. Exit \n");
        int selectedNum;
        scanf("%d", &selectedNum);

        switch (selectedNum) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 9:
                printf("Exiting the calculating program.\n");
                return;
            default:
                printf("Please enter a number between 1 and 4.\n");

        }
    }
}

twoNums getInput(){
    printf("Enter two numbers : ");

    twoNums numbers;
    scanf("%d %d", &numbers.first, &numbers.second );

    return numbers;
}

void add(){
    twoNums pairNum = getInput();
    int answer = pairNum.first + pairNum.second;
    printf("%d + %d = %d \n", pairNum.first, pairNum.second, answer);
}

void subtract(){
    twoNums pairNum = getInput();
    if(pairNum.first > pairNum.second) printf("%d - %d = %d \n", pairNum.first, pairNum.second, pairNum.first-pairNum.second);
    else printf("%d - %d = %d \n", pairNum.second, pairNum.first, pairNum.second-pairNum.first);
}

void multiply(){
    twoNums pairNum = getInput();
    printf("%d * %d = %d \n", pairNum.first, pairNum.second, pairNum.first * pairNum.second);
}

void divide(){
    twoNums pairNum = getInput();
    if(pairNum.first > pairNum.second) printf("%d / %d = %d \n", pairNum.first, pairNum.second, pairNum.first / pairNum.second);
    else printf("%d / %d = %d \n", pairNum.second, pairNum.first, pairNum.second / pairNum.first);
}

void checkDay(int day){

    switch (day) {
        case 1:
            printf("Move fast, Monday! \n");
            break;
        case 2:
            printf("Try to do best, Tuesday! \n");
            break;
        case 3:
            printf("Wonderful Wednesday~ \n");
            break;
        case 4:
            printf("Thumbs up, Thursday! \n");
            break;
        case 5:
            printf("Fantastic Friday :) \n");
            break;
        case 6:
            printf("Super fun, Saturday! \n");
            break;
        case 7:
            printf("So nice, Sunday! \n");
            break;
        default:
            printf("Invalid day! Please enter a number between 1 and 7.\n");
            break;
    }

}

void three(){
    while(1){

        printf("Choose an option to Display Unique Greeting . . . \n");
        printf("1. Monday 2. Tuesday 3. Wednesday 4. Thursday \n");
        printf("5 Friday 6. Saturday 7. Sunday 9. Exit \n");
        int selectedNum;
        scanf("%d", &selectedNum);

        switch (selectedNum) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
                checkDay(selectedNum);
                break;
            case 9:
                printf("Exiting the checking triangle program.\n");
                return;
            default:
                printf("Please enter a number between 1 or 9.\n");

        }
    }
}

void checkTriangle(){

    float side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Invalid input. Please enter positive numbers. \n");
        return;
    }

    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        printf("Can't make a triangle. \n");
        return;
    }

    if (side1 == side2 && side2 == side3) {
        printf("Equilateral triangle \n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Isosceles triangle \n");
    } else {
        printf("Scalene triangle \n");
    }

}

void four(){
    while(1){

        printf("Choose an checking triangle program option . . . \n");
        printf("1. check  9. Exit \n");
        int selectedNum;
        scanf("%d", &selectedNum);

        switch (selectedNum) {
            case 1:
                checkTriangle();
                break;
            case 9:
                printf("Exiting the checking triangle program.\n");
                return;
            default:
                printf("Please enter a number between 1 or 9.\n");

        }
    }
}

void five(){

    printf("Enter a word which is under 6 letters such as apple : ");
    char str[10];
    scanf("%s", str);

    printf("The program is checking first letter of the word is 'a' or not. \n");
    int flag1 = 0;
    printf("== if-else-if == \n");
    if(str[0] == 'a') {
        printf("if-else-if : first letter is 'a' \n");
        flag1 = 1;
    }
    else {
        printf("if-else-if : first letter is '%c' \n", str[0]);
        flag1 = 2;
    }

    int flag2 = 0;
    printf("== switch case == \n");
    switch(str[0]){
        case 'a':
            printf("switch : first letter is 'a' \n");
            flag2 = 1;
            break;
        default:
            printf("switch : first letter is '%c' \n", str[0]);
            flag2 = 2;
    }

    if(flag1 == flag2) printf("The if-else-if and switch case get same result. Good converting. \n");
    else printf("Each statement get different result. Not converted. \n");

}

int main() {

    //1. Display Number of Days in a Month
    int month;
    printf("Enter a Month : ");
    scanf("%d", &month);
    one(month);

    //2. Menu-Driven Program for Basic Arithmetic Operations
    printf("== Arithmetic operation program == \n");
    two();

    //3. Display Unique Greeting for Each Day of the Week
    printf("== Greeting program == \n");
    printf("Choose a day of the week : ");
    three();

    //4. Menu-Driven Program to Check Triangle Types
    printf("== Check triangle types program == \n");
    four();

    //5. Convert if-else-if to switch-case Statement
    printf("== Converting program == \n");
    five();

}
