//  Write a program to find the sum of all the elements of an array using pointers.
#include <stdio.h>

int findSum(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int arr[10], size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = findSum(arr, size);
    printf("The sum of the elements is: %d\n", sum);
    return 0;
}
