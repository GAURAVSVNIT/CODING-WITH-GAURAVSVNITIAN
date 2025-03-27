// Given a positive integer n. Find and return its square root. If n is not a perfect square, then return the floor value of sqrt(n). Solve it using Binary Search method

#include <iostream>
using namespace std;

int findSquareRoot(int n) {
    if (n == 0 || n == 1) {
        return n; 
    }

    int l = 1, h = n, ans = 0;

    while (l <= h) {
        int m = l + (h - l) / 2;

        if (m * m == n) { 
            return m;
        }

        if (m*m < n) {
            ans = m; 
            l = m + 1;
        } else {
            h = m - 1;
        }
    }

    return ans; 
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int result = findSquareRoot(n);
    cout << "The floor value of the square root of " << n << " is: " << result << endl;

    return 0;
}
