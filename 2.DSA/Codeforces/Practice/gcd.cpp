#include <iostream>
#include <vector>
using namespace std;

void precompute(vector<int>& ans, int max_n) {
    vector<bool> is_prime(max_n + 1, true);
    vector<int> cnt(max_n + 1, 0);

    for (int i = 2; i <= max_n; ++i) {
        if (is_prime[i]) {
            // Increment count for all multiples of i
            for (int j = i; j <= max_n; j += i) {
                cnt[j]++;
            }
            // Mark multiples of i starting from i*i as non-prime
            for (long long j = 1LL * i * i; j <= max_n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    // Compute prefix sums
    for (int i = 2; i <= max_n; ++i) {
        ans[i] = ans[i - 1] + cnt[i];
    }
}

int main() {
    int t;
    cin >> t;
    
    vector<int> ns(t);
    int max_n = 0;

    for (int i = 0; i < t; ++i) {
        cin >> ns[i];
        max_n = max(max_n, ns[i]);
    }

    if (max_n < 2) {
        for (int i = 0; i < t; ++i) {
            cout << 0 << endl;
        }
        return 0;
    }

    vector<int> ans(max_n + 1, 0);
    precompute(ans, max_n);

    for (int n : ns) {
        cout << ans[n] << endl;
    }

    return 0;
}