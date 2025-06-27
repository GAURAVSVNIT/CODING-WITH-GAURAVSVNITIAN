#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        // tot[x] = how many times x appears in the suffix (initially the whole array)
        unordered_map<int,int> tot;
        for (int x : a) tot[x]++;

        // pref[x] = how many times x appears in the current segment prefix
        unordered_map<int,int> pref;
        int distinct_in_pref = 0;     // number of distinct in prefix
        int distinct_in_suffix = tot.size(); // number of distinct still remaining
        int segments = 0;

        for (int i = 0; i < n; i++) {
            int x = a[i];
            // Move a[i] from suffix to prefix
            if (pref[x] == 0) distinct_in_pref++;
            pref[x]++;

            if (--tot[x] == 0) {
                distinct_in_suffix--;
            }

            // If every element we've seen so far (distinct_in_pref)
            // still lives in the suffix (distinct_in_suffix >= distinct_in_pref),
            // we can cut here.
            if (distinct_in_suffix >= distinct_in_pref) {
                segments++;
                pref.clear();
                distinct_in_pref = 0;
                // Recompute distinct_in_suffix as size of tot with tot[x]>0:
                distinct_in_suffix = 0;
                for (auto &kv : tot) 
                    if (kv.second > 0) 
                        distinct_in_suffix++;
            }
        }

        cout << segments << "\n";
    }

    return 0;
}
