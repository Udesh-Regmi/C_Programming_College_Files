//  4. Write a program to calculate area of a circle having its radius (r=5). (Hint: π*r*r) 

#include<stdio.h>
int main(){
    float PI = 3.14; 
    int radius = 5; 
    float area = PI * radius * radius; 

    printf("The area of circle having radius of %d is %f ", radius, area); 
    return 0; 

}