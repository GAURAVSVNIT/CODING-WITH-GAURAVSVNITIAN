#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        
        vector<int> a(n);
        long long S = 0;
        
        for (int &val : a) {
            cin >> val;
            S += val;
        }
        
        long long suffix_sum = 0;
        int ans = 0;

        for (int i = n - 1; i >= 0; i--) {
            suffix_sum += a[i];

            if (suffix_sum >= x) {
                ans = k;
                break;
            }

            long long required = x - suffix_sum;
            long long m = (required + S - 1) / S; 
            
            if (m <= k - 1) {
                ans = max(ans, k - m);
            }
        }
        cout << ans << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}