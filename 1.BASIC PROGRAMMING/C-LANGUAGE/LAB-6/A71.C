// 71) Write a program in C to find the pivot element of a sorted and rotated array 
// using binary search. Pivot element is the only element in input array which is 
// smaller than its previous element. A pivot element divided a sorted rotated array 
// into two monotonically increasing array.

#include <stdio.h>

// Function to find the pivot element using binary search
int findPivot(int arr[], int low, int high) {
    if (high < low)
        return -1;
    if (high == low)
        return low;

    int mid = (low + high) / 2;

    // If mid element is greater than its next element, mid element is the pivot
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid;

    // If mid element is smaller than its previous element, mid-1 element is the pivot
    if (mid > low && arr[mid] < arr[mid - 1])
        return mid - 1;

    // If mid element is greater than the first element, pivot must be in the right half
    if (arr[low] >= arr[mid])
        return findPivot(arr, low, mid - 1);

    // If mid element is smaller than the first element, pivot must be in the left half
    return findPivot(arr, mid + 1, high);
}

int main() {
    int arr[] = {5, 6, 7, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivot = findPivot(arr, 0, n - 1);

    if (pivot == -1)
        printf("No pivot element found\n");
    else
        printf("Pivot element is at index %d and value is %d\n", pivot, arr[pivot]);

    return 0;
}