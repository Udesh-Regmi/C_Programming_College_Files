// 3. Write a program to calculate the sum of the first 50 natural numbers using a
// recursive function.
#include <stdio.h>

int sumNatural(int n) {
    if (n == 1) return 1;
    return n + sumNatural(n - 1);
}

int main() {
    int n = 50;
    printf("Sum of the first 50 natural numbers: %d\n", sumNatural(n));
    return 0;
}
