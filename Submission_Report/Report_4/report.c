// Lab Report -4
// 1. Write a program to input marks for 5 subjects (Physics, Chemistry, Math, English, and
// Biology) for a student. Display the rank of each subject and also the result of total marks
// and percentage obtained with his/her rank in the class. The rank is categorized as fail
// (marks < 40%), pass or third division (marks between 40 and 55%), second (marks
// between 55 and 65%), first (marks between 65 and 80%), distinction (marks between 80
// and 95%), and extraordinary (marks above 95 to 100%).

#include <stdio.h>
#define NUM_SUBJECTS 5
#define MAX_MARKS 100
#define TOTAL_MARKS (NUM_SUBJECTS * MAX_MARKS)

// Function to determine rank based on marks
const char* determineRank(float marks) {
    if (marks < 40.0)
        return "Fail";
    else if (marks < 55.0)
        return "Pass (Third Division)";
    else if (marks < 65.0)
        return "Second Division";
    else if (marks < 80.0)
        return "First Division";
    else if (marks < 95.0)
        return "Distinction";
    else
        return "Extraordinary";
}

int main() {
    float marks[NUM_SUBJECTS];
    float total = 0.0, percentage;
    int i;

    // Array of subjects
    char subjects[NUM_SUBJECTS][10] = {"Physics", "Chemistry", "Math", "English", "Biology"};

    // Input marks for each subject
    for (i = 0; i < NUM_SUBJECTS; i++) {
        printf("Enter marks for %s (0-100): ", subjects[i]);
        scanf("%f", &marks[i]);

        // Validate input
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks! Please enter a value between 0 and 100.\n");
            i--; // Repeat the input for this subject
            continue;
        }

        // Add to total
        total += marks[i];
    }

    // Calculate percentage
    percentage = (total / TOTAL_MARKS) * 100;

    // Display results
    printf("\n--- Student Marks and Results ---\n");
    for (i = 0; i < NUM_SUBJECTS; i++) {
        printf("%-10s: %-6.2f - Rank: %s\n", subjects[i], marks[i], determineRank(marks[i]));
    }

    printf("\nTotal Marks: %.2f / %.0f\n", total, (float)TOTAL_MARKS);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Overall Rank: %s\n", determineRank(percentage));

    return 0;
}
