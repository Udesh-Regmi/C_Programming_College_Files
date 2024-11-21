// 1. Write a program to find the largest and smallest among three entered numbers and display
// whether the identified largest/smallest number is even or odd.

#include <stdio.h>
int main() {
    int num1, num2, num3;
    int largest, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Finding largest and smallest
    largest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    smallest = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    // Checking even or odd
    if (largest % 2 == 0)
        printf("Largest number is even.\n");
    else
        printf("Largest number is odd.\n");

    if (smallest % 2 == 0)
        printf("Smallest number is even.\n");
    else
        printf("Smallest number is odd.\n");

    return 0;
}
