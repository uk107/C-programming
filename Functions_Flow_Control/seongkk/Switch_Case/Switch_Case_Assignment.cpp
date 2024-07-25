// 1. Display Number of Days in a Month
// #include <stdio.h>
//
// int leap_year(int year) {
//     if (year % 4 == 0) {
//         if (year % 100 == 0) {
//             if (year % 400 == 0) {
//                 return 1;
//             } else {
//                 return 0;
//             }
//         } else {
//             return 1;
//         }
//     } else {
//         return 0;
//     }
// }
//
// int main() {
//     int month, year;
//
//
//     printf("Enter year: ");
//     scanf("%d", &year);
//     printf("Enter month (1-12): ");
//     scanf("%d", &month);
//
//     int days = 0;
//
//
//     switch (month) {
//         case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//             days = 31;
//         break;
//         case 4: case 6: case 9: case 11:
//             days = 30;
//         break;
//         case 2:
//             if (leap_year(year)) {
//                 days = 29;
//             } else {
//                 days = 28;
//             }
//         break;
//         default:
//             printf("error");
//         return 1;
//     }
//
//
//     printf("day in month : %d year : %d days : %d ", month, year, days);
//
//     return 0;
// }



// // 2. Menu-Driven Program for Basic Arithmetic Operations
// #include <stdio.h>
//
// int main() {
//     int choice;
//     float num1, num2, result;
//
//     while (1) {
//
//         printf("1. Add ");
//         printf("2. minus ");
//         printf("3. Multiplication ");
//         printf("4. Division ");
//         scanf("%d", &choice);
//
//
//
//         scanf("%f %f", &num1, &num2);
//
//
//         switch (choice) {
//             case 1:
//                 result = num1 + num2;
//             printf("%.2f", result);
//             break;
//             case 2:
//                 result = num1 - num2;
//             printf("%.2f", result);
//             break;
//             case 3:
//                 result = num1 * num2;
//             printf("%.2f", result);
//             break;
//             case 4:
//                 if (num2 != 0) {
//                     result = num1 / num2;
//                     printf("%.2f", result);
//                 } else {
//                     printf("Error");
//                 }
//             break;
//             default:
//                 printf("wrong choice");
//             break;
//         }
//     }
//
//     return 0;
// }





// 3. Display Unique Greeting for Each Day of the Week

// #include <stdio.h>
//
// int main() {
//     int day;
//
//
//     printf("enter the day(1 ~ 7) : ");
//     scanf("%d", &day);
//
//
//     switch (day) {
//         case 1:
//             printf("tired monday :( ");
//         break;
//         case 2:
//             printf("holy moly tuesday :|");
//         break;
//         case 3:
//             printf("not bad ");
//         break;
//         case 4:
//             printf("almost there baby");
//         break;
//         case 5:
//             printf("holy cow");
//         break;
//         case 6:
//             printf("damn i love it :)");
//         break;
//         case 7:
//             printf("OMG");
//         break;
//         default:
//             printf("error");
//         break;
//     }
//
//     return 0;
// }


// 4. Menu-Driven Program to Check Triangle Types

// #include <stdio.h>
//
// int main() {
//     int a, b, c;
//
//
//     printf("Enter three side of triangle : ");
//     scanf("%d %d %d", &a, &b, &c);
//
//
//     if (a <= 0 || b <= 0 || c <= 0) {
//         printf("wrong answer");
//     } else if (a + b > c && a + c > b && b + c > a) {
//         if (a == b && b == c) {
//             printf("Equilateral triangle.\n");
//         } else if (a == b || b == c || a == c) {
//             printf("Isosceles triangle.\n");
//         } else {
//             printf("triangle.\n");
//         }
//     } else {
//         printf("not a triangle");
//     }
//
//     return 0;
// }

// 5. Convert if-else-if to switch-case Statement

// #include <stdio.h>
//
// int main() {
//     int num;
//
//     printf("Enter a number between 1 and 3: ");
//     scanf("%d", &num);
//
//     switch (num) {
//         case 1:
//             printf("You entered one.\n");
//         break;
//         case 2:
//             printf("You entered two.\n");
//         break;
//         case 3:
//             printf("You entered three.\n");
//         break;
//         default:
//             printf("Number not in range.\n");
//         break;
//     }
//
//     return 0;
// }
