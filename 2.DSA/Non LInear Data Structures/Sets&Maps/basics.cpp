#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(), x.end()
#define pb push_back

int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    cout << "Size of set: " << s.size() << endl;
    cout << "Elements in set: ";
    for (auto it : s)
        cout << it << " ";
    cout << endl;
    cout << "Finding 3 in set: " << (s.find(3) != s.end() ? "Found" : "Not Found") << endl;
}