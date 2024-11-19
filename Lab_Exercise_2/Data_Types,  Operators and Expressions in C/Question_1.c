// 1. Write a program to declare two integer variables and one float variable, then initialize  them to 10, 15, and 12.6. Also print the variable values on the screen.  

#include<stdio.h>
int main(){
    int num_1; 
    int num_2; 
    float num_3; 

    num_1= 10; 
    num_2= 15; 
    num_3 = 12.6; 

    printf("Number 1 after initialization is %d \n", num_1);
    printf("Number 2 after initialization is %d \n", num_2);
    printf("Number 3 after initialization is %.2f \n", num_3);
    return 0; 
}