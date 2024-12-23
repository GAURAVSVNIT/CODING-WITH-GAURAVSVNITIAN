#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> result;
        if (matrix.empty()) 
        return result;

        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) 
        {
            // Traverse from left to right
            for (int i = left; i <= right; i++) 
            {
                result.push_back(matrix[top][i]);
            }
            top++;
    
            // Traverse from top to bottom
            for (int i = top; i <= bottom; i++) 
            {
                result.push_back(matrix[right][i]);
            }
            right--;

            // Traverse from right to left
            if (top <= bottom) {
                for (int i = right; i >= left; i--) 
                {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // Traverse from bottom to top
            if (left <= right) {
                for (int i = bottom; i >= top; i--) 
                {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return result;
};

int main() {
    Solution solution;
    int m, n;
    }
    cout << "Enter the number of rows: ";
    cin >> m; // Read the number of rows
    cout << "Enter the number of columns: ";
    cin >> n; // Read the number of columns

    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j]; // Read the elements of the matrix
        }
    }

    vector<int> result = solution.spiralOrder(matrix); // Call the function to get the spiral order

    cout << "Spiral order of the matrix: ";
    for (int num : result) {
        cout << num << " "; // Print the spiral order
    }
    cout << endl;

    return 0;
}