// 1. Write a C or C++ program to sort the input array [12, 45, 33, 87, 56, 9, 11, 7,
//     67] using the Bucket Sort algorithm with 7 buckets.

#include <bits/stdc++.h>
using namespace std;

// Function to perform bucket sort
void bucketSort(int arr[], int n, int bucketSize) {
    // Create buckets
    vector<vector<int>> buckets(bucketSize);

    // Distribute input array elements into buckets
    for (int i = 0; i < n; i++) {
        int bucketIndex = arr[i] / bucketSize;
        if (bucketIndex >= bucketSize) {
            bucketIndex = bucketSize - 1;
        }
        buckets[bucketIndex].push_back(arr[i]);
    }

    // Sort each bucket and concatenate the results
    for (int i = 0; i < bucketSize; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // Concatenate sorted buckets into the original array
    int index = 0;
    for (int i = 0; i < bucketSize; i++) {
        for (int j = 0; j < buckets[i].size(); j++) {
            arr[index++] = buckets[i][j];
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 45, 33, 87, 56, 9, 11, 7, 67};
    int n = sizeof(arr) / sizeof(arr[0]);
    int bucketSize = 10; // Size of each bucket

    cout << "Original array: ";
    printArray(arr, n);

    bucketSort(arr, n, bucketSize);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}