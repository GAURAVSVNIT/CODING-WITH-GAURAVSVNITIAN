/* Let A[n] be an array of n distinct integers. If i < j and A[i] > A[j], then the pair (i, j)
is called an inversion of A. Write a C/C++ program that determines the number of
inversions in any permutation on n elements. */

#include <iostream>
using namespace std;

// Function to find the number of inversions in the array
// Function to merge two halves and count inversions
int mergeAndCount(int arr[], int temp[], int left, int mid, int right) {
    int i = left; // Starting index for left subarray
    int j = mid;  // Starting index for right subarray
    int k = left; // Starting index to be sorted
    int inv_count = 0;

    // Merge the two halves while counting inversions
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count += (mid - i); // Count inversions
        }
    }

    // Copy the remaining elements of left subarray, if any
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    // Copy the remaining elements of right subarray, if any
    while (j <= right)
        temp[k++] = arr[j++];

    // Copy the sorted subarray into Original array
    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

// Function to find the number of inversions in the array using merge sort
int mergeSortAndCount(int arr[], int temp[], int left, int right) {
    int mid, inv_count = 0;
    if (right > left) {
        mid = (right + left) / 2;

        inv_count += mergeSortAndCount(arr, temp, left, mid);
        inv_count += mergeSortAndCount(arr, temp, mid + 1, right);

        inv_count += mergeAndCount(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

int main() {
    int n;
    // Prompt the user to enter the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    int temp[n];
    // Prompt the user to enter the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Find the number of inversions in the array
    int inversions = mergeSortAndCount(arr, temp, 0, n - 1);
    // Output the number of inversions
    cout << "Number of inversions are: " << inversions << endl;
}
