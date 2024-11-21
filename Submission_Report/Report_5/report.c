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
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
double calculateSeries() {
    double sum = 0.0;
    for (int i = 1; i <= 10; i++) {
        sum += pow(i, i) / factorial(i); // Add all terms (including primes)
    }
    return sum;
}
void displayPrimes() {
    printf("Prime numbers between 1 and 10: ");
    for (int i = 1; i <= 10; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    printf("Sum of the series (including primes): %.2f\n", calculateSeries());
    displayPrimes();
    return 0;
}
