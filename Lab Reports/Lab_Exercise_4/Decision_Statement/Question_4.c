// Write a program that asks for a number and tests whether it is a multiple of 5, divisible by 7, but not by eleven.
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking the conditions
    if (num % 5 == 0 && num % 7 == 0 && num % 11 != 0) {
        printf("%d is a multiple of 5, divisible by 7 but not by 11.\n", num);
    } else {
        printf("%d does not meet the criteria.\n", num);
    }

    return 0;
}
