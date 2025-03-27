// 2. Let A[n] be an array of n distinct integers. If I < j and A[i] > A[j], then the pair (I, j) Is
// called an inversion of A. Write a C/C++ program that determines the number of
// Inversions in any permutation on n elements in O(n lg n) worst-case time. (Hint: Modify
// merge sort)
// Example: A = {4, 1, 3, 2} output is 4

#include <iostream>
#include <vector>

using namespace std;

int merge(vector<int>& v, int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    vector<int> v1(n1);
    vector<int> v2(n2);

    // Copy elements into left and right subarrays
    for (int i = 0; i < n1; i++) {
        v1[i] = v[low + i];
    }

    for (int i = 0; i < n2; i++) {
        v2[i] = v[mid + 1 + i];
    }

    int i = 0, j = 0, k = low;
    int inversions = 0;
    while (i < n1 && j < n2) {
        if (v1[i] <= v2[j]) {
            v[k++] = v1[i++];
        } else {
            v[k++] = v2[j++];
            inversions += n1 - i; // Count inversions
        }
    }

    while (i < n1) {
        v[k++] = v1[i++];
    }

    while (j < n2) {
        v[k++] = v2[j++];
    }

    return inversions;
}

int mergesort(vector<int>& v, int low, int high) {
    int inversions = 0;
    if (low < high) {
        int mid = low + (high - low) / 2; // Correct mid calculation

        // Recursively sort both halves
        inversions += mergesort(v, low, mid);
        inversions += mergesort(v, mid + 1, high);

        // Merge sorted halves
        inversions += merge(v, low, mid, high);
    }
    return inversions;
}

int main() {
    int n;
    cout << "Enter size of Array: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements of Array: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int inversions = mergesort(v, 0, n - 1);

    cout << "Number of Inversions: " << inversions << endl;

    return 0;
}