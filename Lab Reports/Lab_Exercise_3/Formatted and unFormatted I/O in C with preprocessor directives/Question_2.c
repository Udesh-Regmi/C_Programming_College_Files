// 2. Given x=3.0, y=12.5, z= 523.3, A=300.0, B=1200.5, C=5300.3, Write a program to display the following: 
 
#include <stdio.h>

int main() {
    float x = 3.0, y = 12.5, z = 523.3;
    float A = 300.0, B = 1200.5, C = 5300.3;

    printf("X\tY\tZ=\t ");
    printf("%.1f\t%.1f\t%.1f\n", x, y, z);
    printf("A\tB\tC=\t ");
    printf("%.1f\t%.1f\t%.1f\n", A, B, C);
    printf("------------------------------------------\n");
    printf("X\tY\tZ=\t");
    printf("|%.2f\t |%.2f\t|%.2f\n", x, y, z);
    printf("A\tB\tC=\t");
    printf("|%.2f |%.2f |%.2f\n", A, B, C);

    return 0;
}
