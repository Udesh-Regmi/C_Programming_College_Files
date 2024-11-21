// Write a function that accepts structure as an argument and returns structure to the
// calling program.

#include <stdio.h>

// Define a structure
struct Data {
    int id;
    char name[50];
};

// Function to input and return a structure
struct Data getInput() {
    struct Data d;
    printf("Enter ID: ");
    scanf("%d", &d.id);
    getchar(); // Consume newline character
    printf("Enter Name: ");
    fgets(d.name, 50, stdin);
    return d;
}

int main() {
    // Call function and display result
    struct Data result = getInput();
    printf("\nDetails Entered:\n");
    printf("ID: %d\n", result.id);
    printf("Name: %s", result.name);

    return 0;
}
