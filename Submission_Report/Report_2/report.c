// Lab Report 2: . 
// Title: Write a program to take input of name, roll number, and marks obtained by a student in 5 subjects each having 100 full marks and display the name, roll number, and percentage score secured.
#include <stdio.h>
int main()
{
   char name[50];
   int roll;
   float sub1, sub2, sub3, sub4, sub5,  percentage, totalMarks;
   printf("Enter your name: ");
   scanf("%s", name);
   printf("Enter your roll number: ");
   scanf("%d", &roll);
   printf("Enter marks in 5 subjects respectively: ");
   scanf("%f \n %f  \n %f \n %f \n %f", &sub1, &sub2, &sub3, &sub4, &sub5);
   totalMarks= sub1 + sub2 + sub3 + sub4 + sub5;
   percentage =(totalMarks/500)* 100;
   printf("Name: %s\nRoll number: %d\n Total Marks: %.2f \n Percentage: %.2f\n", name,     roll, totalMarks, percentage);
   return 0;
}
