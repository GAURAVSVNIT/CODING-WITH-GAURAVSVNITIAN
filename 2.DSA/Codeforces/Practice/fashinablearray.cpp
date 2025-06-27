#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int minOperations(vector<int>& arr) {
  int minVal = *min_element(arr.begin(), arr.end());
  int maxVal = *max_element(arr.begin(), arr.end());

  if ((minVal + maxVal) % 2 == 0) {
    return 0;
  }

  return (minVal == maxVal) ? 1 : 2;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
    }

    cout << minOperations(arr) << endl;
  }

  return 0;
}