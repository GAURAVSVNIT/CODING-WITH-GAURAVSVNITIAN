#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n % 2 == 0) {
            cout << -1 << endl;
        } else {
            vector<int> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }

            // Sort in descending order
            sort(a.rbegin(), a.rend());

            // Print sorted array
            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl; // Ensure a newline after output
        }
    }

    return 0;
}
