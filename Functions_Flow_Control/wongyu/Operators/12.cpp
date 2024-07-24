#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

void printComplex(Complex c) {
    if (c.imag >= 0) {
        printf("%.2f + %.2fi\n", c.real, c.imag);
    } else {
        printf("%.2f - %.2fi\n", c.real, -c.imag);
    }
}

int main() {
    Complex c1, c2, sum;

    printf("real 1: ");
    scanf("%f", &c1.real);
    printf("imag 1: ");
    scanf("%f", &c1.imag);

    printf("real 2: ");
    scanf("%f", &c2.real);
    printf("imag 2: ");
    scanf("%f", &c2.imag);

    sum = addComplex(c1, c2);

    printf("add: ");
    printComplex(sum);

    return 0;
}
