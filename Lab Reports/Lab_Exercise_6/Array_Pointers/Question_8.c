// Write a program to compare two strings.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result > 0) {
        printf("The first string is greater.\n");//Here greater is ASCII value 
    } else if(result< 0 ){
        printf("The second string is greater.\n");
    }
    else{
        printf("Invalid");
    }
    return 0;
}
