#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int prev2 = 0, prev1 = 1;
    int curr;
    for (int i = 2; i <= n; i++) {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    cout << prev1;
}
// Time Complexity: O(n)
// Space Complexity: O(1) for dp array