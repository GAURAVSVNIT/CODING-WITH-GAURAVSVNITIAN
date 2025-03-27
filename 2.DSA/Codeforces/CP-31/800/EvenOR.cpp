// # # // #include <bits/stdc++.h>
// # # // using namespace std;

// # # // int main() {
// # # //     int n;
// # # //     scanf("%d", &n);
// # # //     vector<int> a(n);
// # # //     for (int i = 0; i < n; ++i) {
// # # //         scanf("%d", &a[i]);
// # # //     }
    
// # # //     int total_or = 0;
// # # //     for (int num : a) {
// # # //         total_or |= num;
// # # //     }
    
// # # //     if (n % 2 == 0) {
// # # //         printf("%d\n", total_or);
// # # //         return 0;
// # # //     }
    
// # # //     vector<int> prefix(n);
// # # //     prefix[0] = a[0];
// # # //     for (int i = 1; i < n; ++i) {
// # # //         prefix[i] = prefix[i - 1] | a[i];
// # # //     }
    
// # # //     vector<int> suffix(n);
// # # //     suffix[n - 1] = a[n - 1];
// # # //     for (int i = n - 2; i >= 0; --i) {
// # # //         suffix[i] = suffix[i + 1] | a[i];
// # # //     }
    
// # # //     bool found = false;
// # # //     int max_or = 0;
// # # //     for (int i = 0; i < n; ++i) {
// # # //         int left = (i > 0) ? prefix[i - 1] : 0;
// # # //         int right = (i < n - 1) ? suffix[i + 1] : 0;
// # # //         int current = left | right;
// # # //         if (current == total_or) {
// # # //             found = true;
// # # //             break;
// # # //         }
// # # //         if (current > max_or) {
// # # //             max_or = current;
// # # //         }
// # # //     }
    
// # # //     printf("%d\n", found ? total_or : max_or);
// # # //     return 0;
// # # // }

// # n = int(input())
// # a = list(map(int, input().split())) 
 
// # x = 0
// # for num in a:
// #     x |= num
 
// # if n % 2 == 0:
// #     x = 0
// #     for num in a:
// #         x |= num
// #     print(x)
 
// # else:
// #     a.sort(reverse=True)
// #     a.pop()
// #     x = 0
// #     for num in a:
// #         x |= num
// #     print(x)

#include <bits/stdc++.h>
using namespace std;
 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
		int n;
		cin >> n;
		 vector<int>a;
		 for(int j = 1; j <=n ; j++) {
			int p; cin >> p;
			a.push_back(p);
		 }
		 sort(a.begin(), a.end());
		 long long ans;
		 if(a.size() % 2 == 0) {
			ans = 0;
			for(int i = 0; i < n; i++) {
				ans |= a[i];
			}
		 }
		 else {
			ans = 0;
			for(int i = 1; i < n; i++) {
				ans |= a[i];
			}
			long long ans1 = 0;
			for(int i = 0; i < n-1; i++) {
				ans1 |= a[i];
			}
			ans = max(ans1, ans);
 
		 }
		 cout << ans << endl;
 
    }