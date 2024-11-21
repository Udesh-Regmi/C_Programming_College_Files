// Write a program to read the values of coefficients a, b, and c of the quadratic equation
// ax2+bx+c=0 and find the roots of the equation.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    printf("Enter the coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculating discriminant
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        // One real root
        root1 = -b / (2 * a);
        printf("Roots are real and equal: %.2f\n", root1);
    } else {
        // Complex roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
