#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int c0 = 0;
        for (char ch : s) {
            if (ch == '0') c0++;
        }

        int m = n / 2;

        if (k > m) {
            cout << "NO\n";
            continue;
        }

        int x = c0 - (m - k);
        if (x < 0 || x % 2 != 0) {
            cout << "NO\n";
            continue;
        }

        int a = x / 2;
        if (a < 0 || a > k) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
