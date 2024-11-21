// 5. Define a function named fact() to calculate the factorial of a number n and then
// write a program that uses this function fact() to calculate combination and
// permutation.
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;
    printf("Enter n and r for combination/permutation: ");
    scanf("%d %d", &n, &r);

    printf("Factorial of %d: %d\n", n, factorial(n));
    printf("Combination (C(%d, %d)): %d\n", n, r, combination(n, r));
    printf("Permutation (P(%d, %d)): %d\n", n, r, permutation(n, r));

    return 0;
}
