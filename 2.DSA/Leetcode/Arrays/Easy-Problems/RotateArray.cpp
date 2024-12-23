#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // In case k is greater than the size of the array
        reverse(nums.begin(), nums.end()); // Reverse the entire array
        reverse(nums.begin(), nums.begin() + k); // Reverse the first k elements
        reverse(nums.begin() + k, nums.end()); // Reverse the remaining n-k elements
    }
};

int main() {
    Solution solution;
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n; // Read the number of elements in the array

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; // Read the elements of the array
    }

    cout << "Enter the number of positions to rotate: ";
    cin >> k; // Read the number of positions to rotate

    solution.rotate(nums, k); // Call the function to rotate the array

    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " "; // Print the rotated array
    }
    cout << endl;

    return 0;
}