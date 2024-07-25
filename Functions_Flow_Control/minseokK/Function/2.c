//
// Created by MinseokK on 24. 7. 23.
//
// Function to Calculate Simple Interest
// S = 원금 * 이율 * 기간
#include <stdio.h>

double CalculateSimpleInterest(double principal, double rate, double time) {
    double result = principal * rate * time;
    return result;
}

int main(){

    double principal ,rate,time;
    printf("CalculateSimpleInterest you can put (principal ,rate,time) : \n");
    printf("principal : \n");
    scanf("%lf", &principal);
    printf("rate : \n");
    scanf("%lf", &rate);
    printf("time : \n");
    scanf("%lf", &time);

    printf("The result is %f", CalculateSimpleInterest(principal ,rate,time));

}