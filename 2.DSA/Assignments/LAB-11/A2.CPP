//Q-2 GIven an array of integers, sort the array using Counting Sort algorithm.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to perform counting sort
void countingSort(vector<int>& arr) {
    int maxElement = *max_element(arr.begin(), arr.end());
    vector<int> count(maxElement + 1, 0);
    vector<int> output(arr.size());

    // Count occurrences of each element
    for (int num : arr) {
        count[num]++;
    }

    // Calculate cumulative count
    for (int i = 1; i <= maxElement; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array
    for (int i = arr.size() - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the sorted elements back to the original array
    arr = output;
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

    countingSort(arr);

    cout << "Sorted Array using Counting Sort: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}