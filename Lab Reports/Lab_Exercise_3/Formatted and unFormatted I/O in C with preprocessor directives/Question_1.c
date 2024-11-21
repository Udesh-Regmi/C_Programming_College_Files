// 1. Write a program to produce the output as shown below: 

#include <stdio.h>

int main() {
    int x = 6, y = 3;

    printf("x\ty\texpressions\tresults\n");
    printf("%d\t%d\tx+y+3\t\t%d\n", x, y, x + y + 3);
    printf("%d\t%d\tx-y-2\t\t%d\n", x, y, x - y - 2);
    printf("%d\t%d\tx*y*5\t\t%d\n", x, y, x * y * 5);
    printf("%d\t%d\tx/y\t\t%d\n", x, y, x / y);
    printf("%d\t%d\tx%%y\t\t%d\n", x, y, x % y);

    return 0;
}
