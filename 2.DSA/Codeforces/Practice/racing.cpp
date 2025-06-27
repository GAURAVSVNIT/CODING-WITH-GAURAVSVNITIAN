#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; ++i) {
        cin >> d[i];
    }
    vector<pair<int, int>> obstacles(n);
    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        obstacles[i] = {l, r};
    }

    vector<int> forward_prev_min, forward_prev_max;
    forward_prev_min.push_back(0);
    forward_prev_max.push_back(0);
    bool possible = true;

    for (int i = 0; i < n; ++i) {
        int li = obstacles[i].first;
        int ri = obstacles[i].second;
        int di = d[i];
        int current_min = forward_prev_min[i];
        int current_max = forward_prev_max[i];

        if (current_min > current_max) {
            possible = false;
            break;
        }

        if (di == 0 || di == 1) {
            int new_prev_min = max(current_min, li - di);
            int new_prev_max = min(current_max, ri - di);
            if (new_prev_min > new_prev_max) {
                possible = false;
                break;
            }
            int new_current_min = new_prev_min + di;
            int new_current_max = new_prev_max + di;
            forward_prev_min.push_back(new_current_min);
            forward_prev_max.push_back(new_current_max);
        } else {
            int a0 = max(current_min, li);
            int b0 = min(current_max, ri);
            bool valid0 = (a0 <= b0);

            int a1 = max(current_min, li - 1);
            int b1 = min(current_max, ri - 1);
            bool valid1 = (a1 <= b1);

            if (!valid0 && !valid1) {
                possible = false;
                break;
            }

            int new_current_min = INT_MAX;
            int new_current_max = INT_MIN;

            if (valid0) {
                new_current_min = min(new_current_min, a0);
                new_current_max = max(new_current_max, b0);
            }
            if (valid1) {
                new_current_min = min(new_current_min, a1 + 1);
                new_current_max = max(new_current_max, b1 + 1);
            }

            forward_prev_min.push_back(new_current_min);
            forward_prev_max.push_back(new_current_max);
        }
    }

    if (!possible || forward_prev_min.back() > forward_prev_max.back()) {
        cout << -1 << endl;
        return;
    }

    vector<int> ans(n);
    int h_current = forward_prev_max.back();
    possible = true;

    for (int i = n - 1; i >= 0; --i) {
        int di_original = d[i];
        if (di_original == 0 || di_original == 1) {
            int h_prev = h_current - di_original;
            if (i == 0) {
                if (h_prev != 0) {
                    possible = false;
                    break;
                }
            } else {
                if (h_prev < forward_prev_min[i-1] || h_prev > forward_prev_max[i-1] ||
                    h_prev < obstacles[i-1].first || h_prev > obstacles[i-1].second) {
                    possible = false;
                    break;
                }
            }
            ans[i] = di_original;
            h_current = h_prev;
        } else {
            bool found = false;
            int candidate_h_prev = h_current - 1;
            if (i == 0) {
                if (candidate_h_prev == 0) {
                    ans[i] = 1;
                    h_current = candidate_h_prev;
                    found = true;
                }
            } else {
                if (candidate_h_prev >= forward_prev_min[i-1] && candidate_h_prev <= forward_prev_max[i-1] &&
                    candidate_h_prev >= obstacles[i-1].first && candidate_h_prev <= obstacles[i-1].second) {
                    ans[i] = 1;
                    h_current = candidate_h_prev;
                    found = true;
                }
            }
            if (!found) {
                candidate_h_prev = h_current;
                if (i == 0) {
                    if (candidate_h_prev == 0) {
                        ans[i] = 0;
                        h_current = candidate_h_prev;
                        found = true;
                    }
                } else {
                    if (candidate_h_prev >= forward_prev_min[i-1] && candidate_h_prev <= forward_prev_max[i-1] &&
                        candidate_h_prev >= obstacles[i-1].first && candidate_h_prev <= obstacles[i-1].second) {
                        ans[i] = 0;
                        h_current = candidate_h_prev;
                        found = true;
                    }
                }
            }
            if (!found) {
                possible = false;
                break;
            }
        }
    }

    if (possible && h_current == 0) {
        for (int x : ans) {
            cout << x << " ";
        }
        cout << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}