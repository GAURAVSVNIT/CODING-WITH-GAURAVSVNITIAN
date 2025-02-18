#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
using namespace std;

int main() {
    // Vector
    vector<int> v = {1, 2, 3, 4, 5};
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Pair
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl;

    // String
    string s = "Hello";
    cout << s << endl;

    // Sort
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}


