//  4. Write a program to swap two variable values with and without using a third variable

#include <stdio.h>
int main() {
    int a, b, temp;

    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    printf("Original values: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping with a third variable: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping without a third variable to its original position: a = %d, b = %d\n", a, b);

    return 0;
}
