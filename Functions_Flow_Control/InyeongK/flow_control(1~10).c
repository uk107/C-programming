#include <stdio.h>

void one(){
    printf("Enter a number : ");
    int firstNum;
    scanf("%d", &firstNum);

    if(firstNum%2){
        printf("Odd \n"); //홀수
    }else{
        printf("Even \n"); //짝수
    }
}

void two(){

    printf("Enter a number : ");
    int secondNum;
    scanf("%d", &secondNum);


    while(secondNum > 1){

        secondNum -= 2;
    }

    if(secondNum == 0) printf("Even \n");
    else printf("Odd \n");

}

void three(){
    printf("Enter a number : ");
    int thirdNum;
    scanf("%d", &thirdNum);

    if(thirdNum%5){
        printf("indivisible 5 \n");
    }else{
        printf("divisible 5 \n");
    }
}

void four(){

    printf("Enter a number : ");
    int fourthNum;
    scanf("%d", &fourthNum);

    if(fourthNum > 0) printf("Positive \n");
    else printf("Non-positive \n");

}

void five(){

    printf("Enter a number : ");
    int fifthNum;
    scanf("%d", &fifthNum);

    if(fifthNum >= 100 && fifthNum < 1000) printf("Three digit Number \n");
    else printf("Not three digit Number \n");

}

void six(){

    printf("Enter two number : ");
    int sixthNum1, sixthNum2;
    scanf("%d %d", &sixthNum1, &sixthNum2);

    if(sixthNum1 == sixthNum2) printf("same number \n");
    else{
        int bigNum;
        if(sixthNum1 > sixthNum2) bigNum = sixthNum1;
        else bigNum = sixthNum2;
        printf("%d is greater umber \n", bigNum);
    }

}

void seven(){

    printf("Enter three number : ");
    int seventhNum1, seventhNum2, seventhNum3;
    scanf("%d %d %d", &seventhNum1, &seventhNum2, &seventhNum3);

    if(seventhNum1 == seventhNum2 && seventhNum2 == seventhNum3) printf("same number \n");
    else{
        int bigNum;
        if(seventhNum1 > seventhNum2) bigNum = seventhNum1;
        else bigNum = seventhNum2;

        if(bigNum < seventhNum3) bigNum = seventhNum3;

        printf("%d is greatest umber \n", bigNum);
    }
}

void eight(){

    printf("Enter year : ");
    int yearNum;
    scanf("%d", &yearNum);

    if ((yearNum % 4 == 0 && yearNum % 100 != 0) || yearNum % 400 == 0)
        printf("Leaf year \n");
    else
        printf("Not Leaf year \n");

}

void nine(){

    printf("Enter a original price and a selling price : ");
    int originPrice, sellPrice;
    scanf("%d %d", &originPrice, &sellPrice);

    int profit = (sellPrice / originPrice)*100;
    if(profit > 0) printf("%d profit \n", profit);
    else printf("%d loss \n", profit);

}

void ten(){

    printf("Enter a letter : ");
    char ch;
    getchar();
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') printf("Upper case \n");
    else printf("Lower case \n");

}

int main(){

    //1. Check if a Number is Even or Odd
    one();

    //2. Check if a Number is Even or Odd Without Using the % Operator
    two();

    //3. Check if a Number is Divisible by 5
    three();

    //4. Check if a Number is Positive or Non-Positive
    four();

    //5. Check if a Number is a Three-Digit Number
    five();

    //6. Find the Greater of Two Numbers (or Print if They are the Same)
    six();

    //7. Find the Greatest Among Three Numbers (or Print if Any are the Same)
    seven();

    //8. Check if a Year is a Leap Year
    eight();

    //9. Calculate and Print Profit or Loss Percentage
    nine();

    //10. Check if an Alphabet is Uppercase or Lowercase
    ten();

}
