// Define a structure “complex” (typedef) to read two complex numbers. Next, perform addition and subtraction of these two complex numbers and display the result.

#include <stdio.h>

// Define structure for complex numbers
typedef struct Complex {
    float real;
    float imag;
} Complex;

// Function to add two complex numbers
Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtractComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main() {
    Complex c1, c2, sum, diff;

    // Input complex numbers
    printf("Enter first complex number (real imag): ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter second complex number (real imag): ");
    scanf("%f %f", &c2.real, &c2.imag);

    // Perform operations
    sum = addComplex(c1, c2);
    diff = subtractComplex(c1, c2);

    // Display results
    printf("\nSum: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Difference: %.2f + %.2fi\n", diff.real, diff.imag);

    return 0;
}
