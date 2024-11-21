// Write a program to copy one string to another string with and without using the string
// handling function.

//With string handling function

#include <stdio.h>
#include <string.h>

int main() {
    char source[100], destination[100];

    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);

    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
    return 0;
}


//Without string handling function
#include <stdio.h>

void copyString(char* source, char* destination) {
    int i;
    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0';
}

int main() {
    char source[100], destination[100];

    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);

    copyString(source, destination);
    printf("Copied string: %s\n", destination);
    return 0;
}
