// Write a recursive function to generate Fibonacci series up to 300. [i.e., 0, 1, 1, 2,
// 3, 5, 8, 13, 21, 34, 55, 89, 144,... ]

#include <stdio.h>
void fibonacci(int a, int b) {
    if (a > 300) return;
    printf("%d ", a);
    fibonacci(b, a + b);
}

int main() {
    printf("Fibonacci series up to 300: ");
    fibonacci(0, 1);
    return 0;
}
