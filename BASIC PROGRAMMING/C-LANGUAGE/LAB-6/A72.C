//72) Write a program in C to rotate an array by N positions.
#include <stdio.h>

// Function to rotate an array by N positions
void rotateArray(int arr[], int n, int positions) {
    int temp[n];
    int i, j;

    // Copy the last 'positions' elements of the original array to the beginning of the temp array
    for (i = 0; i < positions; i++) {
        temp[i] = arr[n - positions + i];
    }

    // Copy the remaining elements of the original array to the temp array
    for (j = 0; j < n - positions; j++) {
        temp[positions + j] = arr[j];
    }

    // Copy the temp array back to the original array
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int positions = 3;

    printf("Original array: ");
    printArray(arr, n);

    rotateArray(arr, n, positions);

    printf("Rotated array: ");
    printArray(arr, n);

    return 0;
}