/*
Q1: An array is a bitonic array if all integers from index 0 to index i are sorted in
ascending order, and all subsequent integers from index i+1 to n-1 are sorted in
descending order. Given a bitonic array of n distinct integers, write a C/C++ program to
find the maximum integer in the array in O(log(n)) time.
*/
# include <iostream>
using namespace std;

int main() {
    int n;
    // Prompt the user to enter the number of elements in the array
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    // Declare an array of size n
    int arr[n];
    // Prompt the user to enter the elements of the array
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    // Initialize start and end pointers
    int start = 0;
    int end = n - 1;

    // Binary search to find the maximum element in the array
    while (start < end) {
        int mid = start + (end - start) / 2;
        // If the middle element is less than the next element, the maximum is in the right half
        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } else {
            // Otherwise, the maximum is in the left half
            end = mid;
        }
    }

    // The maximum element is at the start index
    cout<<"The maximum element in the array is: "<<arr[start]<<endl;
    return 0;
}

// Time Complexity: O(log(n))
// Space Complexity: O(1)
