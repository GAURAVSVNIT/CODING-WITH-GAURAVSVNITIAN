// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// void solve() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n,m;
//         cin >> n >> m;
//         vector<int> a(n);
        
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         int count = 0;
//         for(auto i : a) {
//             if(a[i]>= m) {
//                 count++;
//             }

//         }
//     }

        
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     solve();
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t; 

    while (t--) {
        int n, x;
        cin >> n >> x; 

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }

        
        sort(a.rbegin(), a.rend());

        int current_size = 0, count = 0;

        for (int num : a) {
            current_size++;
            if (current_size * num >= x) {
                count++;
                current_size = 0;
            }
        }

        cout << count << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
