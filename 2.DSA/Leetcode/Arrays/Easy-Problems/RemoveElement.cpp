#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int k = 0; // Pointer for the next position of the non-val element
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != val) {
            nums[k++] = nums[i];
        }
    }
    return k;
}

int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    int k = removeElement(nums, val);

    cout << "Number of elements not equal to " << val << ": " << k << endl;
    cout << "Array after removing " << val << ": ";
    for (int i = 0; i < k; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
