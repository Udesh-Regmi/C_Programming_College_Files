// 5. Write a program to take a character input from the keyboard and check if it is a number, alphabet, or special character using ASCII CODE Again check if the character is using character functions below: 
// a. Alphanumeric => isalnum() 
// b. Blank character => isblank() 
// c. Alphabetic => isalpha() 
// d. Control character => iscntrl() 
// e. Number-digit => isdigit() 
// f. Upper case => isupper()
// g. Lower case => islower() 
// h. Hexadecimal digit => ixdigit() 
// i. Graphical character => isgraph() 



#include <stdio.h>
#include <ctype.h> // For character classification functions

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("\nCharacter Analysis:\n");
    if (isalnum(ch))
        printf("The character is alphanumeric.\n");
    else
        printf("The character is NOT alphanumeric.\n");

    if (isblank(ch))
        printf("The character is a blank.\n");

    if (isalpha(ch))
        printf("The character is alphabetic.\n");

    if (iscntrl(ch))
        printf("The character is a control character.\n");

    if (isdigit(ch))
        printf("The character is a digit.\n");

    if (isupper(ch))
        printf("The character is uppercase.\n");

    if (islower(ch))
        printf("The character is lowercase.\n");

    if (isxdigit(ch))
        printf("The character is a hexadecimal digit.\n");

    if (isgraph(ch))
        printf("The character is a graphical character.\n");

    return 0;
}
