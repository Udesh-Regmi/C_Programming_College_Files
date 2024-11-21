// 3. Write a set of strings each of length 40 into a file “stringc.txt” and display it (use fputs()
// and fgets() functions).
#include <stdio.h>

int main() {
    FILE *file;
    char str[40];

    // Open file for writing
    file = fopen("stringc.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write multiple strings to file
    printf("Enter strings (each up to 40 characters, press Enter to stop):\n");
    while (fgets(str, sizeof(str), stdin) != NULL) {
        if (str[0] == '\n') break;  // Stop on empty line
        fputs(str, file);
    }

    // Close the file
    fclose(file);
    printf("Strings written to file 'stringc.txt'.\n");

    return 0;
}
