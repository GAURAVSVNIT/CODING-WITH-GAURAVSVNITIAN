// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;


// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         vector<long long> arr(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> arr[i];
//         }
//         vector<long long> copy(n);
//         copy = arr;
//         sort(copy.begin(), copy.end());

//         if(copy == arr || k>1) {
//             cout<<"YES"<<endl;
//         }
//         else {
//             cout<<"NO"<<endl;
//         }
//     }
    
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
    
//     while (t--) {
// 		long long n , k;
// 		 cin >> n >> k;
// 		vector<long long>a;
// 		for(int j = 1; j <= k; j++) {
// 			long long p;
// 			 cin >>p;
// 			 a.push_back(p);
// 		}
// 		sort(a.begin(), a.end());
// 		long long ans = 0;
// 		int i = 0;
// 		int j = k - 1;
// 		for(int i = 0; i < a.size(); i++) {
// 			for(int j = i + 1; j < a.size(); j++) {
// 				long long op = a[i] + a[j] - n;
// 				if(op >= 0) {
// 					ans += (op+1)*2;
// 					if(a[i] == n && a[j] == n) ans-= 4;
// 					else if(a[i] == n) ans-= 2;
// 					else if(a[j] == n) ans-= 2;
					
// 				}
 
// 			}
// 		}
// 		cout << ans << endl;
 
		 
 
//     }
// return 0;
// }