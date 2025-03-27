#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            int min = INT_MAX;
            for (int j = 0; j < n; j++) 
            {
                if (a[j]>a[j+1]) {
                    min = j;
                    swap(a[j], a[j+1]);
                }
                
            }
        }
        
    }

    return 0;
}