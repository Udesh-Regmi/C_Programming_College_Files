//  Write characters into a file “filec.txt”. The set of characters is read from the keyboard until
// an enter key is pressed (use putc() and getc() functions).

#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    // Open file for writing
    file = fopen("filec.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read characters until Enter key is pressed
    printf("Enter characters (press Enter to stop):\n");
    while ((ch = getchar()) != '\n') {
        putc(ch, file);
    }

    // Close the file
    fclose(file);
    printf("Characters written to file 'filec.txt'.\n");

    return 0;
}
