#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max_a = *max_element(a.begin(), a.end());
        int min_a = *min_element(a.begin(), a.end());

        cout << (max_a - min_a) << '\n';
    }
    
    return 0;
}
