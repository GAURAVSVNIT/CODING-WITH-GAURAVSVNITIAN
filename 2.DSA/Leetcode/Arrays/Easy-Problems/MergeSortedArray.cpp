#include <iostream>
#include <vector>
using namespace std;
// Time Complexity: O(n)
// Space Complexity: O(1)
/*
Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
*/

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1; // Pointer for nums1
    int j = n - 1; // Pointer for nums2
    int k = m + n - 1; // Pointer for the merged array

    while (i >= 0 && j >= 0) 
    {
        if (nums1[i] > nums2[j]) 
        {
            nums1[k--] = nums1[i--]; // 3.Now Array is [1,2,3,3,5,6]
        } 
        else 
        {
            nums1[k--] = nums2[j--]; // 1.Now Array is [1,2,3,0,0,6]
                                     // 2.Now Array is [1,2,3,0,5,6]
        }                            // 4.Now Array is [1,2,2,3,5,6]
        
    }

    // Copy remaining elements of nums2, if any
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
