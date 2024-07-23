#include <stdio.h>

float one(int r){

    float result = r * r * 3.14;

    return result;
}

float two(int p, int y, float r){

    float result = p * y * r;

    return result;
}

int three(int n){
    return n%2;
}

void four(int n){
    printf("Print first %d : ", n);
    for(int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void five(int n){
    printf("Print first %d Odd : ", n);

    int start = 0;
    int next = 1;

    while (start < n) {
        printf("%d ", next);
        next += 2;
        start++;
    }

    printf("\n");
}

int main() {

    //1. Function to Calculate the Area of a Circle (TSRS)
    int r;
    printf("Enter a radius number of a circle : ");
    scanf("%d", &r);
    float area = one(r);
    printf("The area of a circle : %.2f \n", area);

    //2. Function to Calculate Simple Interest (TSRS)
    int year, principal;
    float rate;
    printf("Enter principal, year, and rate :"); // 1000000won 2year  0.05%
    scanf("%d %d %f", &principal, &year, &rate);
    float simple = two(principal, year, rate);
    printf("Simple interest : %.2f won \n", simple);

    //3. Function to Check if a Number is Even or Odd (TSRS)
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int flag = three(num);
    if(flag) printf("Odd \n");
    else printf("Even \n");

    //4. Function to Print the First N Natural Numbers (TSRN)
    int fourthNum;
    printf("Enter a number : ");
    scanf("%d", &fourthNum);
    four(fourthNum);

    //5. Function to Print the First N Odd Natural Numbers (TSRN)
    int fifthNum;
    printf("Enter a number : ");
    scanf("%d", &fifthNum);
    five(fifthNum);

}
