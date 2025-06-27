#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    vector<int> x, y;
    int temp;

    // Read first line of integers (x)
    while (cin.peek() != '\n') {
        cin >> temp;
        x.push_back(temp);
    }
    cin.ignore(); // consume newline

    // Read second line of integers (y)
    while (cin >> temp) {
        y.push_back(temp);
        if (cin.peek() == '\n') break; // stop if newline reached
    }

    int n = x.size();
    unordered_map<int, int> max_y_dict;

    for (int i = 0; i < n; ++i) {
        int current_x = x[i];
        int current_y = y[i];

        if (max_y_dict.find(current_x) == max_y_dict.end() || current_y > max_y_dict[current_x]) {
            max_y_dict[current_x] = current_y;
        }
    }

    // Collect max y values
    vector<int> max_y_values;
    for (const auto& pair : max_y_dict) {
        max_y_values.push_back(pair.second);
    }

    if (max_y_values.size() < 3) {
        cout << -1 << endl;
    } else {
        sort(max_y_values.rbegin(), max_y_values.rend()); // sort descending
        int total = max_y_values[0] + max_y_values[1] + max_y_values[2];
        cout << total << endl;
    }

    return 0;
}
