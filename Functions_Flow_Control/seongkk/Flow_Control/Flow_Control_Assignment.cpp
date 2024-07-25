// 1. Check if a Number is Even or Odd
// #include <Stdio.h>
//
// int main() {
//      // change
//     int num;
//
//     printf("write number : ");
//     scanf("%d", &num);
//
//     if((num % 2 == 0)) {
//         printf("even number");
//     }
//         else {
//             printf("odd number");
//
//         }
//         return 0;
// }

// 2. Check if a Number is Even or Odd Without Using the % Operator
//int main() {
//
//    int num;
//
//    printf("wirte any number : ");
//    scanf("%d", &num);
//
//
//    if((num & 1) == 0) {
//        printf("even number");
//
//    }
//    else {
//
//        printf("odd number");
//
//
//    }
//    return 0;
//
//}

//3. Check if a Number is Divisible by 5
//#include <stdio.h>

//int main() {
//
//    int num;
//
//    printf("wirte number : ");
//    scanf("%d", &num);
//
//
//
//    if((num % 5 == 0)) {
//
//        printf("Can be divided");
//    }
//    else{
//
//        printf("can't be divided");
//
//    }

//    return 0;


//}

//4. Check if a Number is Positive or Non-Positive
//#include <stdio.h>
//
//int main() {
//
//    int num;
//    int result;
//
//
//    printf("write number : ");
//    result = scanf("%d", &num);
//
//
//    if((result != 1)) {
//
//        printf("error");
//    }
//
//    else if((num >= 0)) {
//
//        printf("positive number");
//
//        }
//    else {
//
//        printf("negative number");
//    }
//
//
//
//    return 0;
//
//}

//5. Check if a Number is a Three-Digit Number
//
//#include <stdio.h>
//
//int main() {
//
//
//    int count = 0;
//    int num;
//
//    scanf("%d", &num);
//
//    while(num>0) {
//        num/=10;
//        count++;
//    }
//    printf("%d",count);
//
//
//}

//6. Find the Greater of Two Numbers (or Print if They are the Same)
//
//#include <stdio.h>
//
//int main() {
//
//    int num1;
//    int num2;
//
//    printf("write two numbers : ");
//    scanf("%d %d", &num1,&num2);
//
//    if((num1 > num2)) {
//        printf("%d" ,num1);
//
//    }
//    else if(num2 > num1) {
//            printf("%d", num2);
//
//
//    }
//    else {
//        printf("%d", num1);
//    }
//    return 0;
//
//
//
//}

//7. Find the Greatest Among Three Numbers (or Print if Any are the Same)
//#include <stdio.h>
//
//int main() {
//
//    int num1, num2, num3;
//    int max;
//
//    printf("write three numbers : ");
//    scanf("%d %d %d", &num1, &num2, &num3);
//
//    if((num1 >= num2)) {
//
//        max = num1;
//    } else {
//        max = num2;
//    }
//
//
//    if((num3 >= max)) {
//
//        max = num3;
//    } else {
//
//
//    }
//
//    printf("%d", max);
//    return 0;
//
//
//}

//8. Check if a Year is a Leap Year
//#include <stdio.h>
//
//int main() {
//    int year;
//
//    printf("Write a year: ");
//    scanf("%d", &year);
//
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//        printf("%d is a leap year", year);
//    } else {
//        printf("%d is not a leap yearn", year);
//    }
//
//    return 0;
//}






//10. Check if an Alphabet is Uppercase or Lowercase
#include <stdio.h>
//
int main() {
    char ch;
    getchar();
    printf("Enter a character: ");
    scanf("%c", &ch);


    if (ch >= 'A' && ch <= 'Z') {
        printf("%c uppercase letter", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c lowercase letter", ch);
    } else {
        printf("%c is error", ch);
    }

    return 0;
}
