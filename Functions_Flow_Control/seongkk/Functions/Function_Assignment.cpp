// //1. Function to Calculate the Area of a Circle (TSRS)
// #include <stdio.h>
//
//
// double calculateCircle(double radius) {
//     const double pi = 3.141592;
//     return pi * radius * radius;
// }
//
// int main() {
//     double radius;
//
//     printf("wirte radius : ");
//     scanf("%lf", &radius);
//
//
//     float area = calculateCircle(radius);
//
//
//     printf("radius is %.2lf area is %.2lf", radius, area);
//
 //     return 0;
// }
//


//2. Function to Calculate Simple Interest (TSRS)

// #include <stdio.h>
//
// float calculateSimpleInterest(float principal, float rate, float time) {
//     return (principal * rate * time) / 100;
// }
//
// int main() {
//     float principal, rate, time, interest;
//
//
//     printf("principal: ");
//     scanf("%f", &principal);
//
//     printf("rate: ");
//     scanf("%f", &rate);
//
//     printf("time: ");
//     scanf("%f", &time);
//
//
//     interest = calculateSimpleInterest(principal, rate, time);
//
//
//     printf("The simple interest is: %.2f\n", interest);
//
//     return 0;
// }

// //3. Function to Check if a Number is Even or Odd (TSRS)

// #include <stdio.h>
//
// void EvenOrOdd(int number) {
//     if (number % 2 == 0) {
//         printf("Even number", number);
//     } else {
//         printf("odd number", number);
//     }
// }
//
// int main() {
//     int number;
//
//
//     printf("Enter a number: ");
//     scanf("%d", &number);
//
//
//     EvenOrOdd(number);
//
//     return 0;
// }



// //4. Function to Print the First N Natural Numbers (TSRN)

// #include <stdio.h>
//
//
// void NaturalNumbers(int N) {
//     for (int i = 1; i <= N; i++) {
//         printf("%d ", i);
//     }
//     printf(" ");
// }
//
// int main() {
//     int N;
//
//
//     printf("write a number(N) : ");
//     scanf("%d", &N);
//
//
//     if (N <= 0) {
//         printf("error");
//     } else {
//
//        NaturalNumbers(N);
//     }
//
//     return 0;
// }


// //5. Function to Print the First N Odd Natural Numbers
