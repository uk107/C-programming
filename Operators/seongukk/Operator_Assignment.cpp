// 10. Calculate Area and Perimeter of a Rectangle
//
// #include <stdio.h>
//
// int RectangleArea(int base, int height) {
//     return base * height;
// }
//
// int RectanglePerimeter(int base, int height) {
//     return (base + height) * 2;
// }
//
// int main() {
//     int area, perimeter, base, height;
//
//
//     printf("write base and height : ");
//     scanf("%d %d", &base, &height);
//
//
//     area = RectangleArea(base, height);
//     perimeter = RectanglePerimeter(base, height);
//
//
//     printf("area is : %d and perimeter is %d\n", area, perimeter);
//
//     return 0;
// }

// 11 .Append a Digit to a Number
// #include <stdio.h>
//
// int main() {
//
//     int FstInt, ApndNum, result;
//
//     printf("write a First Integer : ");
//     scanf(" %d", &FstInt);
//
//     printf("Enter the number you want to append : ");
//     scanf(" %d", &ApndNum);
//
//     result = FstInt * 10 + ApndNum;
//
//     printf("result : %d", result);
//
//
//     return 0;
//
// }

// 12 .Add Two Complex Numbers

// #include <stdio.h>
//
//
// typedef struct {
//     double real;
//     double imag;
// } Complex;
//
// void printComplex(Complex c) {
//     if (c.imag >= 0)
//         printf("%.2f + %.2fi\n", c.real, c.imag);
//     else
//         printf("%.2f - %.2fi\n", c.real, -c.imag);
// }
//
// Complex addComplex(Complex c1, Complex c2) {
//     Complex result;
//     result.real = c1.real + c2.real;
//     result.imag = c1.imag + c2.imag;
//     return result;
// }

// 13 .Calculate Simple Interest#include <stdio.h>
// #include <stdio.h>
//
// double calculateSimpleInterest(double principal, double rate, double time) {
//     return (principal * rate * time) / 100.0;
// }
//
// int main() {
//     double principal, rate, time, interest;
//
//
//     printf("Enter the principal amount: ");
//     scanf("%lf", &principal);
//
//     printf("Enter the rate of interest: ");
//     scanf("%lf", &rate);
//
//     printf("Enter the time period in years: ");
//     scanf("%lf", &time);
//
//
//     interest = calculateSimpleInterest(principal, rate, time);
//
//
//     printf("Simple Interest: %.2f\n", interest);
//
//     return 0;
// }


// 14 .Calculate Compound Interest

// #include <stdio.h>
//
//
// double power(double base, int exponent) {
//     double result = 1.0;
//     for (int i = 0; i < exponent; ++i) {
//         result *= base;
//     }
//     return result;
// }
//
//
// double calculateCompoundInterest(double principal, double rate, int times, double time) {
//     double amount;
//     double factor = 1 + rate / (100.0 * times);
//     amount = principal * power(factor, times * time);
//     return amount;
// }
//
// int main() {
//     double principal, rate, time, amount;
//     int times;
//
//
//     printf("Enter the principal amount: ");
//     scanf("%lf", &principal);
//
//     printf("Enter the annual rate of interest: ");
//     scanf("%lf", &rate);
//
//     printf("Enter the number of times interest is compounded per year: ");
//     scanf("%d", &times);
//
//     printf("Enter the time period in years: ");
//     scanf("%lf", &time);
//
//
//     amount = calculateCompoundInterest(principal, rate, times, time);
//
//
//     printf("Compound Interest Amount: %.2f\n", amount);
//
//     return 0;
// }
//


// 15. Check If a Number is Even or Odd Using Bitwise Operator

// #include <stdio.h>
//
//
// void EvenOrOdd(int number) {
//     if (number & 1) {
//         printf("The number %d is Odd.\n", number);
//     } else {
//         printf("The number %d is Even.\n", number);
//     }
// }
//
// int main() {
//     int number;
//
//
//     printf("wirte a number: ");
//     scanf("%d", &number);
//
//
//     EvenOrOdd(number);
//
//     return 0;
// }
