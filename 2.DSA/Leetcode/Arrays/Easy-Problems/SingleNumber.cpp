#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num;
    }
    return result;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "The single number is: " << singleNumber(nums) << endl;
    return 0;
}
// Method 2: Using Hash Table
// Time Complexity: O(n)
// Space Complexity: O(n)
// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;
// 
// int singleNumber(vector<int>& nums) {
//     unordered_map<int, int> freq;
//     for (int num : nums) {
//         freq[num]++;
//     }
//     for (const auto& pair : freq) {
//         if (pair.second == 1) {
//             return pair.first;
//         }
//     }
//     return -1;
// }