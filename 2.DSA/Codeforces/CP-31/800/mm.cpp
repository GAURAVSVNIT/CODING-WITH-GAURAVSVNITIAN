#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int &i : a) cin >> i;
        
        a.insert(a.begin(), 0); // Start at 0
        a.push_back(x);         // End at x
        a.push_back(x);         // Return trip
        a.push_back(0);         // Back to start
        
        sort(a.begin(), a.end());
        
        int mx = 0;
        for (int i = 1; i < a.size(); i++)
            mx = max(mx, a[i] - a[i - 1]);

        cout << mx << '\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}