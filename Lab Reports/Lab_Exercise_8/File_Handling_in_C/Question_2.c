// Read characters from file “filec.txt” created in question 1. Also, count the number of
// characters in the file (use fputs() and fgets() functions).
#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int count = 0;

    // Open file for reading
    file = fopen("filec.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read characters and count them
    printf("Content of 'filec.txt':\n");
    while ((ch = getc(file)) != EOF) {
        putchar(ch);
        count++;
    }

    printf("\nNumber of characters in file: %d\n", count);

    // Close the file
    fclose(file);

    return 0;
}
