// Write a program to find the sum as Y of the following series, excluding the prime
// numbers in the series. Write a function program to check whether the number is
// prime or not. Also, write a recursive function to calculate the factorial of the
// series.
#include <stdio.h>
#include <math.h>
long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
int isPrime(int n) {
    if (n <= 1) return 0; // 0 and 1 are not prime
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0; // Divisible by other numbers
    }
    return 1; // Prime number
}
double calculateSeries() {
    double sum = 0.0;
    printf("Terms in the series (excluding primes):\n");
    for (int i = 1; i <= 10; i++) {
        if (!isPrime(i)) { // Exclude prime numbers
            double term = pow(i, 2) / factorial(i);
            printf("Term %d: %.5f\n", i, term); // Display each term
            sum += term;
        }
    }
    return sum;
}

int main() {
    // Display and calculate the sum of the series
    double result = calculateSeries();
    printf("Sum of the series (excluding primes): %.5f\n", result);
    return 0;
}
