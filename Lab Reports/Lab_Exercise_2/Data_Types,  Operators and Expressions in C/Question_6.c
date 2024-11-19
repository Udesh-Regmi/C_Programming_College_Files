
// 6. Print the value of y for given x=2 & z=4 and analyze the output.  
// a. y = x++ + ++x;  
// b. y= ++x + ++x;  
// c. y= ++x + ++x + ++x;  
// d.  y = x>z;  
// e. y= x>z? x:z;  
// f. y = x & z;  
// g. y= x>>2 + z<<1;  

#include <stdio.h>
int main() {
    int x = 2, z = 4, y;

    // a. y = x++ + ++x;
    x = 2; // Resetting x to 2
    y = x++ + ++x;
    printf("a. y = x++ + ++x; y = %d (x = %d)\n", y, x);

    // b. y = ++x + ++x;
    x = 2; // Resetting x to 2
    y = ++x + ++x;
    printf("b. y = ++x + ++x; y = %d (x = %d)\n", y, x);

    // c. y = ++x + ++x + ++x;
    x = 2; // Resetting x to 2
    y = ++x + ++x + ++x;
    printf("c. y = ++x + ++x + ++x; y = %d (x = %d)\n", y, x);

    // d. y = x > z;
    x = 2; // Resetting x to 2
    y = x > z;
    printf("d. y = x > z; y = %d\n", y);

    // e. y = x > z ? x : z;
    x = 2; // Resetting x to 2
    y = x > z ? x : z;
    printf("e. y = x > z ? x : z; y = %d\n", y);

    // f. y = x & z;
    x = 2; // Resetting x to 2
    y = x & z;
    printf("f. y = x & z; y = %d\n", y);

    // g. y = x >> 2 + z << 1;
    x = 2; // Resetting x to 2
    y = (x >> 2) + (z << 1);
    printf("g. y = x >> 2 + z << 1; y = %d\n", y);

    return 0;
}
