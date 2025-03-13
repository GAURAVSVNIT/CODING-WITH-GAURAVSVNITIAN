#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Output the number of operations (k) - we don't need to minimize it
        cout << 1 << endl; // Use a single operation for the entire array
        cout << 1 << " " << n << endl; // Select the whole array as the range
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
