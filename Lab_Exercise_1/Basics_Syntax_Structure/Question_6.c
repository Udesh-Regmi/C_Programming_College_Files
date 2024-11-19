// 6. Write a program to calculate simple interest for a given P=4000, T=2, R=5.5. (Hint: I =  P*T*R/100) 
#include<stdio.h>
int main(){
    int Principal= 4000; 
    int Time = 2; 
    float Rate = 5.5; 
    float Simple_Interest = (Principal* Time *Rate)/100; 

    printf("The Simple Interest for Principal of %d in a time span of %d as of %f rate is %.2f ", Principal, Time, Rate, Simple_Interest);
    return 0; 
}