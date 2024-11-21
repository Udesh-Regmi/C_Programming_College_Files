// Write a program to find the biggest among three numbers using a pointer.
#include <stdio.h>

void findLargest(int* a, int* b, int* c, int* largest) {
    *largest = (*a > *b) ? ((*a > *c) ? *a : *c) : ((*b > *c) ? *b : *c);
}

int main() {
    int a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    findLargest(&a, &b, &c, &largest);
    printf("The largest number is: %d\n", largest);
    return 0;
}
