#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    string a;
    cin >> a;

    int m;
    cin >> m;
    string b;
    cin >> b;
    string c;
    cin >> c;

    string res = a;

    for (int i = 0; i < m; ++i) {
        char charadd = b[i];
        char per = c[i];

        if (per == 'V') {
            res.insert(0, 1, charadd);
        } else { 
            res.push_back(charadd);
        }
    }

    
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}