#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

vector<int> transformArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n);
    
    for (int i = 0; i < n; ++i) {
        if (nums[i] > 0) {
            result[i] = nums[(i + nums[i]) % n];
        } else if (nums[i] < 0) {
            result[i] = nums[(i - abs(nums[i])) % n];
        } else {
            result[i] = nums[i];
        }
    }
    
    return result;
}

// Example usage:
int main() {
    vector<int> nums = {3, -2, 1, 1};
    vector<int> result = transformArray(nums);
    for (int val : result) {
        cout << val << " ";
    }
    return 0;
}
