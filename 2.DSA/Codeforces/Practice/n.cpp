#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
 

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<string> aw(n);
    unordered_map<char, int> ac;

    for (int i = 0; i < n; i++) {
        cin >> aw[i];
        for (char c : aw[i]) {
            ac[c]++;
        }
    }

    vector<string> mw(m);
    unordered_map<char, int> rc;

    for (int i = 0; i < m; i++) {
        cin >> mw[i];
    }

    k %= 26;
    for (const string &word : mw) {
        for (char c : word) {
            char sc = 'a' + (c - 'a' + k) % 26;
            rc[sc]++;
        }
    }

    bool suc = true;
    for (const auto &[cn, req] : rc) {
        if (ac[cn] < req) {
            suc = false;
            break;
        }
    }

    cout << (suc ? "Make her kokoro go doki-doki!" : "It is gonna be daijoubu.") << endl;
    return 0;
}