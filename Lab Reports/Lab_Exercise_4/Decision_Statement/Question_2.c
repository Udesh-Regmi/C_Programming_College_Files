// Write a program to check whether the input alphabet is vowel or not using if-else and
// switch statements.
#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Using if-else
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel (using if-else).\n", ch);
    } else {
        printf("%c is not a vowel (using if-else).\n", ch);
    }

    // Using switch
    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("%c is a vowel (using switch).\n", ch);
            break;
        default:
            printf("%c is not a vowel (using switch).\n", ch);
    }

    return 0;
}
