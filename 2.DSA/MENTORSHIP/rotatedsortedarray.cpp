// Given an integer array nums, sorted in ascending order (with distinct values) and a target value k. The array is rotated at some pivot point that is unknown. Find the index at which k is present and if k is not present return -1.


// Examples:
// Input : nums = [4, 5, 6, 7, 0, 1, 2], k = 0

// Output: 4

// Explanation: Here, the target is 0. We can see that 0 is present in the given rotated sorted array, nums. Thus, we get output as 4, which is the index at which 0 is present in the array.

// Input: nums = [4, 5, 6, 7, 0, 1, 2], k = 3

// Output: -1

// Explanation: Here, the target is 3. Since 3 is not present in the given rotated sorted array. Thus, we get the output as -1.

// Input: nums = [1], k = 0
// Output: -1


#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int l = 0;
    int h = nums.size() - 1;
    while (l <= h) {
        int mid = l + ((h - l) / 2);
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[l] <= nums[mid]) {
            if (nums[l] <= target && target < nums[mid]) {
                h = mid - 1; 
            } else {
                l = mid + 1;
            }
        } 
        else 
        {
            if (nums[mid] < target && target <= nums[h]) 
            {
                l = mid + 1;
            } else {
                h = mid - 1; 
            }
        }
    }
    return -1; 
}


int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int result = search(nums, target);
    cout << "Index of target " << target << ": " << result << endl;

    return 0;
}