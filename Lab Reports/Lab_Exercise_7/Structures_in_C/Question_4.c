// Pass the structures defined in Question 1 into a function, read the structure member, and display the values from the function (use structure pointer).
#include <stdio.h>

// Define structure
struct Employee {
    int id;
    char name[50];
    float salary;
};

// Function to input details
void inputDetails(struct Employee *e) {
    printf("Enter ID: ");
    scanf("%d", &e->id);
    getchar(); // Consume newline character
    printf("Enter Name: ");
    fgets(e->name, 50, stdin);
    printf("Enter Salary: ");
    scanf("%f", &e->salary);
}

// Function to display details
void displayDetails(struct Employee *e) {
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e->id);
    printf("Name: %s", e->name);
    printf("Salary: %.2f\n", e->salary);
}

int main() {
    struct Employee emp;
    inputDetails(&emp);  // Pass structure pointer
    displayDetails(&emp);  // Display using pointer
    return 0;
}
