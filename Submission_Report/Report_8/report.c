// Write a program to read RollNo, Name, Address, Age & marks in physics, C. math in the
// 1st semester of three students in BCA. Store the records in a file std.txt located at d:\
// drive. Display the student details with average marks achieved (use data files to record
// I/O).
#include <stdio.h>
#include <stdlib.h>

// Structure to store student data
struct Student {
    char roll_no[20];
    char name[100];
    char address[200];
    int age;
    float physics_marks;
    float c_math_marks;
    float average_marks;
};

// Function to input and write student data to a file
void input_student_data() {
    struct Student students[3];
    FILE *file;

    // Taking input for three students
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        
        printf("Roll No: ");
        scanf("%s", students[i].roll_no);
        
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  // To read the full name with spaces
        
        printf("Address: ");
        scanf(" %[^\n]", students[i].address);  // To read the full address with spaces
        
        printf("Age: ");
        scanf("%d", &students[i].age);
        
        printf("Marks in Physics: ");
        scanf("%f", &students[i].physics_marks);
        
        printf("Marks in C. Math: ");
        scanf("%f", &students[i].c_math_marks);
        
        // Calculating the average marks
        students[i].average_marks = (students[i].physics_marks + students[i].c_math_marks) / 2.0;
    }

    // Writing the student data to a file
    file = fopen("std.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    for (int i = 0; i < 3; i++) {
        fprintf(file, "Roll No: %s\n", students[i].roll_no);
        fprintf(file, "Name: %s\n", students[i].name);
        fprintf(file, "Address: %s\n", students[i].address);
        fprintf(file, "Age: %d\n", students[i].age);
        fprintf(file, "Marks in Physics: %.2f\n", students[i].physics_marks);
        fprintf(file, "Marks in C. Math: %.2f\n", students[i].c_math_marks);
        fprintf(file, "Average Marks: %.2f\n\n", students[i].average_marks);
    }
    fclose(file);
    printf("\nStudent data has been written to 'std.txt' file.\n");
}

// Function to display student data from the file
void display_student_data() {
    FILE *file;
    char line[500];

    file = fopen("std.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("\nStudent Data from 'std.txt':\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
}

int main() {
    // Call function to input and write student data to a file
    input_student_data();

    // Call function to display student data from the file
    display_student_data();

    return 0;
}
