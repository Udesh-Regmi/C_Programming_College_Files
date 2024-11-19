// 2. Write a C program to prompt the user to input 3 integer values and print these values in  forward and reversed order.  
#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter three integer values: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Forward order: %d %d %d\n", num1, num2, num3);
    printf("Reversed order: %d %d %d\n", num3, num2, num1);
    return 0;
}
