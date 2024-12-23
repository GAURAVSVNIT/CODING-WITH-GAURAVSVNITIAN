#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex) {
    vector<int> row(rowIndex + 1, 1);
    for (int i = 1; i < rowIndex; ++i) {
        for (int j = i; j > 0; --j) {
            row[j] += row[j - 1];
        }
    }
    return row;
}

int main() {
    int rowIndex = 3;
    vector<int> result = getRow(rowIndex);
    cout << "Row " << rowIndex << " of Pascal's Triangle: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
