//74) Given are one dimensional arrays A and B which are sorted in ascending order. 
// Write a program to merge them into a single sorted array C that contains every 
// item form array A and B, in ascending order.
#include <stdio.h>
#include <stdlib.h>

void mergeArrays(int A[], int m, int B[], int n, int C[]) {
    int i = 0, j = 0, k = 0;

    // Merge smaller elements first
    while (i < m && j < n) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    // Copy remaining elements of A, if any
    while (i < m) {
        C[k++] = A[i++];
    }

    // Copy remaining elements of B, if any
    while (j < n) {
        C[k++] = B[j++];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int m, n;

    printf("Enter the size of array A: ");
    scanf("%d", &m);

    int A[m];
    printf("Enter the elements of array A: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the size of array B: ");
    scanf("%d", &n);

    int B[n];
    printf("Enter the elements of array B: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    int C[m + n]; // Create array C with size m + n

    printf("Array A: ");
    printArray(A, m);

    printf("Array B: ");
    printArray(B, n);

    mergeArrays(A, m, B, n, C);

    printf("Merged Array C: ");
    printArray(C, m + n);

    return 0;
}