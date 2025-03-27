
#include <iostream>
#include <string>
using namespace std;

int minOperations(int n, int m, string x, string s) {
    int operations = 0;
    while (x.length() < s.length()) {
        x += x;
        operations++;
    }
    if (x.find(s) != string::npos) {
        return operations;
    }
    x += x;
    operations++;
    if (x.find(s) != string::npos) {
        return operations;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        cout << minOperations(n, m, x, s) << '\n';
    }
    return 0;
}