// 5. Write a program to check whether the given number is an odd or even number by
// a. using modulus operator  
// b. using bitwise operator  
// c. without using bitwise and modulus operators  
// d. using a conditional operator.  

#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // a. Using modulus operator
    if (num % 2 == 0)
        printf("Using modulus: %d is an even number.\n", num);
    else
        printf("Using modulus: %d is an odd number.\n", num);

    // b. Using bitwise operator
    if ((num & 1) == 0)
        printf("Using bitwise: %d is an even number.\n", num);
    else
        printf("Using bitwise: %d is an odd number.\n", num);

    // c. Without using bitwise and modulus operators
    if ((num / 2) * 2 == num)
        printf("Without using bitwise and modulus: %d is an even number.\n", num);
    else
        printf("Without using bitwise and modulus: %d is an odd number.\n", num);

    // d. Using a conditional operator
    (num % 2 == 0) ? printf("Using conditional operator: %d is an even number.\n", num)
                   : printf("Using conditional operator: %d is an odd number.\n", num);

    return 0;
}
