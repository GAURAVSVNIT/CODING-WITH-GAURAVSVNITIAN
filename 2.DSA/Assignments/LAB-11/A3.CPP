//Q-3 Given an array of non-negative integers, sort the array using Radix Sort algorithm.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to perform counting sort based on a specific digit
void countingSort(vector<int>& arr, int exp) {
    int n = arr.size();
    vector<int> output(n);
    vector<int> count(10, 0); // Count array for digits 0-9

    // Count occurrences of each digit
    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    // Calculate cumulative count
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the sorted elements back to the original array
    arr = output;
}
// Function to perform radix sort
void radixSort(vector<int>& arr) {
    // Find the maximum number to determine the number of digits
    int maxElement = *max_element(arr.begin(), arr.end());

    // Perform counting sort for each digit
    for (int exp = 1; maxElement / exp > 0; exp *= 10) {
        countingSort(arr, exp);
    }
}
int main() {
    int n;
    cout << "Enter size of Array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of Array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    radixSort(arr);

    cout << "Sorted Array using Radix Sort: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
