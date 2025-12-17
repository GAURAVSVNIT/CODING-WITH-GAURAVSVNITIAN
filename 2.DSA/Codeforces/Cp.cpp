#include <bits/stdc++.h>
using namespace std;

void z0() {
    int x9;
    cin >> x9;

    long long t1 = 0;
    long long z2 = 0, o3 = 0, b4 = 0;

    vector<long long> v5(x9), v6(x9), v7(x9), v8(x9);
    for (int i = 0; i < x9; ++i) {
        cin >> v5[i] >> v6[i] >> v7[i] >> v8[i];
    }

    for (int i = 0; i < x9; ++i) {
        if (v5[i] > v7[i]) {
            z2 += v5[i] - v7[i];
        }
        if (v6[i] > v8[i]) {
            o3 += v6[i] - v8[i];
            b4 += min(v5[i], v7[i]);
        }
    }

    t1 = z2 + o3 + b4;
    cout << t1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t0;
    cin >> t0;
    while (t0--) {
        z0();
    }

    return 0;
}
