#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define mod 1000000007

void solve(int t)
{ while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> b=a;
        sort(b.begin(), b.end());
        if(a[n-1]=b[n-1])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    solve(t);
    
    return 0;
}