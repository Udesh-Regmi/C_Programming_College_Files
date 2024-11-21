// Write a program to read RollNo, Name, Address, Age & average-marks of 12 students in the BCA class and display the details from the function.
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float marks;
};

// Function to input details
void inputStudents(struct Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        getchar(); // Consume newline character
        printf("Name: ");
        fgets(students[i].name, 50, stdin);
        printf("Address: ");
        fgets(students[i].address, 100, stdin);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
}

// Function to display details
void displayStudents(struct Student students[], int size) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < size; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s", students[i].name);
        printf("Address: %s", students[i].address);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }
}

int main() {
    struct Student students[12];
    inputStudents(students, 12);  // Input details
    displayStudents(students, 12);  // Display details
    return 0;
}
