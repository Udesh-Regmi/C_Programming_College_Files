#include <stdio.h>
#include "conio.h"

int main() {
    char ch;

    printf("Enter a character using getch(): ");
    ch = getch(); // Input without echo
    printf("\nYou entered (getch): %c\n", ch);

    printf("Enter a character using getche(): ");
    ch = getche(); // Input with echo
    printf("\nYou entered (getche): %c\n", ch);

    printf("Enter a character using getchar(): ");
    ch = getchar(); // Standard input
    printf("You entered (getchar): %c\n", ch);

    return 0;
}
