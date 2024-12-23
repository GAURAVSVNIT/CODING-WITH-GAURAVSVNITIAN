#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int diagonalPrime(vector<vector<int>>& nums) {
    int n = nums.size();
    int maxPrime = 0;

    for (int i = 0; i < n; ++i) {
        // Check main diagonal
        if (isPrime(nums[i][i])) {
            maxPrime = max(maxPrime, nums[i][i]);
        }
        // Check anti-diagonal
        if (isPrime(nums[i][n - i - 1])) {
            maxPrime = max(maxPrime, nums[i][n - i - 1]);
        }
    }

    return maxPrime;
}

int main() {
    vector<vector<int>> nums = {
        {2, 3, 5},
        {7, 11, 13},
        {17, 19, 23}
    };

    cout << "Largest prime on diagonals: " << diagonalPrime(nums) << endl;
    return 0;
}
