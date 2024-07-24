#include <stdio.h>
#include <math.h>

int append(int num, int dig) {
    if (dig < 0 || dig > 9) {
        printf("Please enter a single digit 0~9.\n");
        return num;
    }

    int result = num * 10 + dig;
    return result;
}

typedef struct complex{
    float real;
    float imag;
} Complex;

Complex addComplex(Complex c1, Complex c2) {

    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;

}

int checkEvenOdd(int n){

    printf("Bitwise %d : ", n );
    int arr[1000];
    int i = 0;
    while(n>1){
        arr[i++] = n%2;
        n /= 2;
    }

    arr[i] = n%2;

    for(int j=i; j>=0; j--){
        printf("%d ", arr[j]);
    }

    if(arr[0]) printf("Odd number\n");
    else printf("Even number\n");
}

float getSimple(int p, float r, int y){
    return p*r*y;
}

float getCompound(int p, float r, int y, int t){
    float total = p * pow((1 + r / t), t * y);
    return total - p;
}

int main(){

    //10. Calculate Area and Perimeter of a Rectangle
    printf("Enter two numbers for length and width of rectangle : ");
    int length, width;
    scanf("%d %d", &length, &width);
    printf("Area of a rectangle : %d ( = %d * %d) \n", length*width, length, width);
    printf("Perimeter of a rectangle : %d ( = (%d + %d)*2 ) \n", (length+width)*2, length, width);


    //11. Append a Digit to a Number
    int number, digit;
    printf("Enter a original number : ");
    scanf("%d", &number);
    printf("Enter a digit to append : ");
    scanf("%d", &digit);
    printf("Result : %d \n", append(number, digit));


    //12. Add Two Complex Numbers
    Complex c1, c2, result;

    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    result = addComplex(c1, c2);
    printf("The sum of the complex numbers : %.2f + %.2fi\n", result.real, result.imag);

    //13. Calculate Simple Interest
    int principal, year;
    float rate;
    printf("Enter a principal, rate, and year for getting interest : ");
    scanf("%d %f %d", &principal, &rate, &year);
    float simpleInterest = getSimple(principal, rate, year);
    printf("Simple Interest : %.2f \n", simpleInterest);


    //14. Calculate Compound Interest
    printf("Enter the number of times interest is compounded per year : ");
    int times;
    scanf("%d", &times);
    float compoundInterest = getCompound(principal, rate, year, times);
    printf("Compound Interest : %.2f \n", compoundInterest);


    //15. Check If a Number is Even or Odd Using Bitwise Operator
    int num;
    printf("Enter a number in the range of integer : ");
    scanf("%d", &num);
    checkEvenOdd(num);

}
