// Write a program to find separately the sum of the positive and negative integer elements
// of an array of size 10. Pass the positive and negative elements to separate functions,
// e.g., sumpositive(int*), sumnegative(int*) to carry out its sum. Also, pass this array to a
// function called sortarray(int[]) and display the array elements in ascending order using a
//  pointer.

#include <stdio.h>

// Function to calculate the sum of positive integers
int sumPositive(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }
    return sum;
}

// Function to calculate the sum of negative integers
int sumNegative(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }
    return sum;
}

// Function to sort the array in ascending order using a pointer
void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

// Function to display the array
void displayArray(int *arr, int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

// Main function
int main() {
    int arr[10], size = 10;

    // Input elements of the array
    printf("Enter 10 integers (positive and negative):\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sums
    int positiveSum = sumPositive(arr, size);
    int negativeSum = sumNegative(arr, size);

    // Display sums
    printf("Sum of positive integers: %d\n", positiveSum);
    printf("Sum of negative integers: %d\n", negativeSum);

    // Sort and display the array
    sortArray(arr, size);
    printf("Sorted array in ascending order:\n");
    displayArray(arr, size);

    return 0;
}
