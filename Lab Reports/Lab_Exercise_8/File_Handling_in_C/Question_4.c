// Write the name, age, and height of a person into a data file “person.txt” and read it (use
// fprintf() and fscanf() functions)
#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;
    float height;

    // Open file for writing
    file = fopen("person.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Take input and write to file
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter height: ");
    scanf("%f", &height);

    fprintf(file, "Name: %sAge: %d\nHeight: %.2f\n", name, age, height);

    // Close the file
    fclose(file);

    // Read the data back from the file
    file = fopen("person.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nData read from file:\n");
    while (fscanf(file, "Name: %[^\n]%*cAge: %d\nHeight: %f\n", name, &age, &height) == 3) {
        printf("Name: %sAge: %d\nHeight: %.2f\n", name, age, height);
    }

    fclose(file);

    return 0;
}
