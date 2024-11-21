// Write a program to read RollNo, Name, Address, Age & marks in physics and
// compulsory math in the 1st semester of three students in BCA and display the student
// details with average marks achieved.
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float physicsMarks;
    float mathMarks;
    float averageMarks;
};

// Function Prototypes
void inputStudentData(struct Student* student);
void displayStudentData(struct Student student);

int main() {
    struct Student students[3];

    // Reading details for 3 students
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        inputStudentData(&students[i]);
        // Calculate average marks
        students[i].averageMarks = (students[i].physicsMarks + students[i].mathMarks) / 2;
    }

    // Displaying student details with average marks
    printf("\n=== Student Details ===\n");
    for (int i = 0; i < 3; i++) {
        displayStudentData(students[i]);
    }

    return 0;
}

// Function to input student data
void inputStudentData(struct Student* student) {
    printf("Enter Roll No: ");
    scanf("%d", &student->rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]s", student->name);  // To take input with spaces

    printf("Enter Address: ");
    scanf(" %[^\n]s", student->address);  // To take input with spaces

    printf("Enter Age: ");
    scanf("%d", &student->age);

    printf("Enter Marks in Physics: ");
    scanf("%f", &student->physicsMarks);

    printf("Enter Marks in Compulsory Math: ");
    scanf("%f", &student->mathMarks);
}

// Function to display student details
void displayStudentData(struct Student student) {
    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Address: %s\n", student.address);
    printf("Age: %d\n", student.age);
    printf("Marks in Physics: %.2f\n", student.physicsMarks);
    printf("Marks in Compulsory Math: %.2f\n", student.mathMarks);
    printf("Average Marks: %.2f\n", student.averageMarks);
}
