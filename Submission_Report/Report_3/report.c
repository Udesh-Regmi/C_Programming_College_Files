// Lab Report -3:
// Title: Write a program to perform basic mathematical operations on two float variables and display the user's personal information using unformatted I/O.
#include <stdio.h>
#define PLUS +
#define MINUS -
#define MULTIPLY *
#define DIVIDE /
int main() {
   float x, y, z;
   char Ch1;
   printf("Enter two numbers (x and y): ");
   scanf("%f %f", &x, &y);
   printf("Enter the mathematical operator (+, -, *, /): ");
   scanf(" %c", &Ch1);
   switch (Ch1) {
       case '+':
           z = x PLUS y;
           break;
       case '-':
           z = x MINUS y;
           break;
       case '*':
           z = x MULTIPLY y;
           break;
       case '/':
           if (y != 0)
               z = x DIVIDE y;
           else {
               printf("Error: Division by zero!\n");
               return 1;
           }
           break;
       default:
           printf("Error: Invalid operator!\n");
           return 1;
   }
   printf("Result of %.2f %c %.2f = %.2f\n", x, Ch1, y, z);
  
   char name[50], address[100];
   int age;
   float weight, height;
   getchar(); 
   printf("Enter your name: ");
   fgets(name, sizeof(name), stdin); 
   printf("Enter your address: ");
   fgets(address, sizeof(address), stdin);
   printf("Enter your age: ");
   scanf("%d", &age);
   printf("Enter your weight (in kg): ");
   scanf("%f", &weight);
   printf("Enter your height (in cm): ");
   scanf("%f", &height);
   printf("\nPersonal Information:\n");
   printf("Name: %s", name); 
   printf("Address: %s", address);
   printf("Age: %d years\n", age);
   printf("Weight: %.2f kg\n", weight);
   printf("Height: %.2f cm\n", height);
   return 0;
}

