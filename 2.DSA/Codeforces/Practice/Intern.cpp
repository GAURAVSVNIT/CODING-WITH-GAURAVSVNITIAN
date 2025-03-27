#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
    unordered_map<int, int> required = {{0, 3}, {1, 1}, {2, 2}, {3, 1}, {5, 1}};
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<int, int> counts;
        
        for (int d : a) {
            if (required.find(d) != required.end()) {
                counts[d]++;
            }
        }
        bool valid = true;
        for (auto& [d, req] : required) {
            if (counts[d] < req) {
                valid = false;
                break;
            }
        }

        if (!valid) {
            cout << 0 << endl;
            continue;
        }

        // Now find the earliest step
        unordered_map<int, int> current_counts;
        bool found = false;
        
        for (int i = 0; i < n; i++) {
            int d = a[i];
            if (required.find(d) != required.end()) {
                current_counts[d]++;
            }

            // Check conditions
            bool satisfied = true;
            for (auto& [d, req] : required) {
                if (current_counts[d] < req) {
                    satisfied = false;
                    break;
                }
            }

            if (satisfied) {
                cout << i + 1 << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << n << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}