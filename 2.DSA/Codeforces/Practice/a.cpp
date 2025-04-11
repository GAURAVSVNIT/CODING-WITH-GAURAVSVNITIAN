// #include<iostream>
// using namespace std;

// bool isCoPrime(int a, int b);

// bool isCoPrime(int a, int b)
// {
//     int n = max(a,b);
//     for(int i=2; i <n; i++)
//     {
//         if(a%i ==0 && b%i ==0)
//         return false;
//     }
    
//     return true;

// }

// int main()
// {   
//     int x,n,m,ans=0;
//     cin >>n;
//     cin >>m;
//     cin >>x;
//     int l[n][m];
//     for(int i =0; i <n; i++)
//     {
//         for(int j=0; j<m; j++)
//         {
//             cin>>l[i][j];
//         }
//         cout<<endl; 
//     }

//     for(int i =0; i <n; i++)
//     {
//         for(int j =0; j <m; j++)
//         {
//             if(!isCoPrime(x,l[i][j]))
//             ans++;

//         }
//     }

//     cout <<ans;
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {   
    int x, n, m, ans = 0;
    cin >> n >> m >> x;
    vector<vector<int>> l(n, vector<int>(m));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> l[i][j];
        }
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (gcd(x, l[i][j]) > 1) {
                ++ans;
            }
        }
    }
    
    cout << ans;
    return 0;
}