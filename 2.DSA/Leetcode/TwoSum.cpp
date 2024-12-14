// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int x;
//     cout << "Enter the target: "; 
//     cin >> x;
//     int n;
//     cout << "Enter the size: ";
//     cin >> n;
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         int q;
//         cin >> q;
//         v.push_back(q);
//     }
//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = i + 1; j < v.size(); j++)
//         {
//             if (v[i] + v[j] == x)
//             {
//                 cout << i << "," << j << endl;
//             }
//         }
//     }
//     return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution 
// {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) 
//     {
//         for (int i = 0; i < nums.size(); i++) // Corrected the loop syntax
//         {
//             for (int j = i + 1; j < nums.size(); j++) // Corrected the loop syntax
//             {
//                 if (nums[i] + nums[j] == target)
//                 {
//                     return {i, j}; // Return the indices of the two numbers
//                 }
//             }
//         }
//         return {}; // Added a return statement to match the function's return type
//     }
// };

// int main() 
// {
//     Solution sol;
//     vector <int> nums = {2, 7, 11, 15};
//     int target = 9;
//     sol.twoSum(nums, target);
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {}; // Return an empty vector if no solution is found
    }
};

int main() 
{
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    
    if (!result.empty()) 
    {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } 
    else 
    {
        cout << "No solution found" << endl;
    }
    
    return 0;
}