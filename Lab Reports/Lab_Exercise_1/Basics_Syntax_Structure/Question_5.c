//  5. Write a program to calculate the area of an ellipse having its axes (minor=4cm,  major=6cm). (Hint: π *minor *major)  

#include<stdio.h>
int main(){
    float PI = 3.14; 
    float minor = 4; 
    float major = 6; 

    float area = PI * minor * major; 
    printf("The area of ellipse having axes of minor %f and major of %f is %f", minor, major, area);

    return 0;

}