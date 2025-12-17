#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> b_p(n);
    for (int i = 0; i < n; ++i) {
        cin >> b_p[i].first;
        b_p[i].second = i;       
    }

    sort(b_p.begin(), b_p.end());

    bool poss = true;
    for (int i = 0; i < n; ) {
        int curr_b_val = b_p[i].first;
        int j = i;
        while (j < n && b_p[j].first == curr_b_val) {
            j++;
        }
        int cnt = j - i;
        if (cnt % curr_b_val != 0) {
            poss = false;
            break;
        }
        i = j;
    }

    if (!poss) {
        cout << -1 << endl;
        return;
    }

    vector<int> a(n);
    int next_a_val = 1;
    for (int i = 0; i < n; ) {
        int curr_b_val = b_p[i].first;
        
        for (int k = 0; k < curr_b_val; ++k) {
            int ori_idx = b_p[i + k].second;
            a[ori_idx] = next_a_val;
        }
        next_a_val++;
        
        i += curr_b_val;
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}
