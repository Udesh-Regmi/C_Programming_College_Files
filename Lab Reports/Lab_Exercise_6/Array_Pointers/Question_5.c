// Write a program to read a sentence and delete all the white spaces. Replace all “.” by “:”
#include <stdio.h>
#include <string.h>

void modifyString(char* str) {
    int j = 0; // Index for the modified string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') { 
            if (str[i] == '.') {
                str[j++] = ':'; 
            } else {
                str[j++] = str[i]; 
            }
        }
    }
    str[j] = '\0'; // Terminate the modified string
}

int main() {
    char str[100];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline character

    modifyString(str);
    printf("Modified sentence: %s\n", str);
    return 0;
}
