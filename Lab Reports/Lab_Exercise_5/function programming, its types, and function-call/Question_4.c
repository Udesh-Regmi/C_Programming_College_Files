// 4. Write a program to find the GCD (greatest common divisor, or HCF) and LCM
// (least common multiple) of two numbers using user-defined functions and a
// return type.
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("GCD: %d\n", gcd(a, b));
    printf("LCM: %d\n", lcm(a, b));
    return 0;
}
