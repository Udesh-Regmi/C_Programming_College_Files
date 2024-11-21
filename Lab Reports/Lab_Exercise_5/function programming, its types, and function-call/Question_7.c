// Write a program that illustrates the use of local, global, and static variables.
#include <stdio.h>

int globalVar = 10; // Global variable

void staticVariableDemo() {
    static int staticVar = 0; // Static variable
    staticVar++;
    printf("Static variable: %d\n", staticVar);
}

void localVariableDemo() {
    int localVar = 5; // Local variable
    printf("Local variable: %d\n", localVar);
}

int main() {
    printf("Global variable: %d\n", globalVar);
    localVariableDemo();
    staticVariableDemo();
    return 0;
}
