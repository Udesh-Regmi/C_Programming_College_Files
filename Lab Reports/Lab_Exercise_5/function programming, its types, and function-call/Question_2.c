// Write a program to input two integer numbers and display the sum of even
// numbers between these two input numbers using user-defined functions and a
// return type.
#include <stdio.h>

int sumOfEvens(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int start, end;
    printf("Enter two integers: ");
    scanf("%d %d", &start, &end);

    printf("Sum of even numbers between %d and %d: %d\n", start, end, sumOfEvens(start, end));
    return 0;
}
