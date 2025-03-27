//Find the Smallest  element in an array using quick sort

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to partition the array
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = low - 1; // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
// Function to perform quicksort
void quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}
// Function to find the smallest element in an array using quicksort
int findSmallestElement(vector<int>& arr) {
    quicksort(arr, 0, arr.size() - 1);
    return arr[0]; // The first element after sorting is the smallest
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

    int smallestElement = findSmallestElement(arr);
    cout << "Smallest Element in the array is: " << smallestElement << endl;

    return 0;
}