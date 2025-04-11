#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    double denominator = 10000.0 - y * (100.0 - x);
    double A = (y * (100.0 - x) * n) / denominator;

    double monday = n;
    double tuesday = monday + A;
    double wednesday = tuesday * (100.0 - x) / 100.0;
    double thursday = wednesday * (100.0 - y) / 100.0;
    double friday = thursday;

    cout << fixed << setprecision(4);
    cout << monday << " " << tuesday << " " << wednesday << " " << thursday << " " << friday << endl;

    return 0;
}
