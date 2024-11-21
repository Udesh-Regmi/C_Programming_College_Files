// Write a program to sort five string words stored in an array of pointers.

#include <stdio.h>
#include <string.h>

void sortStrings(char* arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                char* temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    char* arr[5];
    char buffer[5][100];

    printf("Enter 5 strings:\n");
    for (int i = 0; i < 5; i++) {
        fgets(buffer[i], sizeof(buffer[i]), stdin);
        arr[i] = buffer[i];
    }

    sortStrings(arr, 5);

    printf("\nSorted strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s", arr[i]);
    }
    return 0;
}
