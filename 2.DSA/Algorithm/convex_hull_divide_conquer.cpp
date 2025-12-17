// Convex Hull using Divide and Conquer (merge via upper/lower tangents)
// Author: Agent Mode
// Complexity: O(n log n)
//
// Input format (stdin):
//   n
//   x1 y1
//   x2 y2
//   ...
//   xn yn
//
// Output:
//   m               // number of points on the convex hull
//   x y             // hull points in CCW order starting from the lowest-leftmost
//   ...
//
// Notes:
// - Points on edges are excluded (strict convex hull). Change <=/>= to </> in the
//   monotone chain if you want to keep collinear edge points.
// - Integer coordinates are assumed. Use long double if you need floating precision.

#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

struct Point {
    long long x, y;
};

static inline bool operator==(const Point& a, const Point& b) {
    return a.x == b.x && a.y == b.y;
}

static inline bool lex_cmp(const Point& a, const Point& b) {
    if (a.x != b.x) return a.x < b.x;
    return a.y < b.y;
}

// Cross product (b - a) x (c - a)
static inline long long cross(const Point& a, const Point& b, const Point& c) {
    return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}

// Monotone chain convex hull (CCW order), excluding collinear points on edges.
static std::vector<Point> monotone_chain(std::vector<Point> pts) {
    if (pts.size() <= 1) return pts;
    std::sort(pts.begin(), pts.end(), lex_cmp);
    pts.erase(std::unique(pts.begin(), pts.end(), [](const Point& a, const Point& b){ return a.x==b.x && a.y==b.y; }), pts.end());

    std::vector<Point> lower, upper;
    for (const auto& p : pts) {
        while (lower.size() >= 2 && cross(lower[lower.size()-2], lower.back(), p) <= 0) {
            lower.pop_back();
        }
        lower.push_back(p);
    }
    for (int i = (int)pts.size() - 1; i >= 0; --i) {
        const auto& p = pts[i];
        while (upper.size() >= 2 && cross(upper[upper.size()-2], upper.back(), p) <= 0) {
            upper.pop_back();
        }
        upper.push_back(p);
    }
    // Concatenate lower and upper to get full hull; skip last of each because it's duplicated
    lower.pop_back();
    upper.pop_back();
    lower.insert(lower.end(), upper.begin(), upper.end());
    return lower;
}

static inline int next_idx(int i, int n) { return (i + 1) % n; }
static inline int prev_idx(int i, int n) { return (i - 1 + n) % n; }

static int index_rightmost(const std::vector<Point>& H) {
    int idx = 0;
    for (int i = 1; i < (int)H.size(); ++i) {
        if (H[i].x > H[idx].x || (H[i].x == H[idx].x && H[i].y > H[idx].y)) idx = i;
    }
    return idx;
}

static int index_leftmost(const std::vector<Point>& H) {
    int idx = 0;
    for (int i = 1; i < (int)H.size(); ++i) {
        if (H[i].x < H[idx].x || (H[i].x == H[idx].x && H[i].y < H[idx].y)) idx = i;
    }
    return idx;
}

// Merge two convex hulls L and R (both CCW), return merged hull (CCW)
static std::vector<Point> merge_hulls(const std::vector<Point>& L, const std::vector<Point>& R) {
    if (L.empty()) return R;
    if (R.empty()) return L;
    if (L.size() <= 2 || R.size() <= 2) {
        // Safe fallback for small hulls
        std::vector<Point> all = L;
        all.insert(all.end(), R.begin(), R.end());
        return monotone_chain(all);
    }

    const int nL = (int)L.size();
    const int nR = (int)R.size();

    int i = index_rightmost(L);
    int j = index_leftmost(R);

    // Upper tangent
    int iU = i, jU = j;
    bool changed = true;
    while (changed) {
        changed = false;
        // advance on left hull while next makes the line R[jU] -> L[iU] not a tangent (point above)
        while (cross(R[jU], L[iU], L[next_idx(iU, nL)]) > 0) {
            iU = next_idx(iU, nL);
        }
        // advance backward on right hull while prev makes the line L[iU] -> R[jU] not a tangent (point below)
        while (cross(L[iU], R[jU], R[prev_idx(jU, nR)]) < 0) {
            jU = prev_idx(jU, nR);
            changed = true;
        }
    }

    // Lower tangent
    int iL = i, jL = j;
    changed = true;
    while (changed) {
        changed = false;
        // move backward on left hull while prev makes the line R[jL] -> L[iL] not a tangent (point below)
        while (cross(R[jL], L[iL], L[prev_idx(iL, nL)]) < 0) {
            iL = prev_idx(iL, nL);
        }
        // move forward on right hull while next makes the line L[iL] -> R[jL] not a tangent (point above)
        while (cross(L[iL], R[jL], R[next_idx(jL, nR)]) > 0) {
            jL = next_idx(jL, nR);
            changed = true;
        }
    }

    std::vector<Point> H;
    auto push_unique = [&](const Point& p) {
        if (H.empty() || !(H.back() == p)) H.push_back(p);
    };

    // Walk CCW from iU to iL on L
    int k = iU;
    push_unique(L[k]);
    while (k != iL) {
        k = next_idx(k, nL);
        push_unique(L[k]);
    }
    // Walk CCW from jL to jU on R
    k = jL;
    push_unique(R[k]);
    while (k != jU) {
        k = next_idx(k, nR);
        push_unique(R[k]);
    }

    // Optional: remove any accidental duplicates if tangents met at same points
    if (!H.empty() && H.front() == H.back()) H.pop_back();

    return H;
}

static std::vector<Point> rotate_hull_to_lowest_left(const std::vector<Point>& H) {
    if (H.empty()) return H;
    int idx = 0;
    for (int i = 1; i < (int)H.size(); ++i) {
        if (lex_cmp(H[i], H[idx])) idx = i;
    }
    std::vector<Point> R;
    R.reserve(H.size());
    for (int t = 0; t < (int)H.size(); ++t) {
        R.push_back(H[(idx + t) % H.size()]);
    }
    return R;
}

static std::vector<Point> dac_convex_hull_rec(const std::vector<Point>& pts_sorted) {
    const int n = (int)pts_sorted.size();
    if (n <= 5) {
        return monotone_chain(pts_sorted);
    }
    int mid = n / 2;
    std::vector<Point> L(pts_sorted.begin(), pts_sorted.begin() + mid);
    std::vector<Point> R(pts_sorted.begin() + mid, pts_sorted.end());

    auto HL = dac_convex_hull_rec(L);
    auto HR = dac_convex_hull_rec(R);

    return merge_hulls(HL, HR);
}

std::vector<Point> convex_hull_divide_and_conquer(std::vector<Point> pts) {
    if (pts.empty()) return {};
    std::sort(pts.begin(), pts.end(), lex_cmp);
    pts.erase(std::unique(pts.begin(), pts.end(), [](const Point& a, const Point& b){ return a.x==b.x && a.y==b.y; }), pts.end());

    auto H = dac_convex_hull_rec(pts);

    // Ensure CCW order and consistent starting point
    H = rotate_hull_to_lowest_left(H);
    return H;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    if (!(std::cin >> n)) {
        std::cerr << "Expected integer n followed by n points (x y)\n";
        return 1;
    }
    std::vector<Point> pts(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> pts[i].x >> pts[i].y;
    }

    auto hull = convex_hull_divide_and_conquer(pts);

    std::cout << hull.size() << "\n";
    for (const auto& p : hull) {
        std::cout << p.x << " " << p.y << "\n";
    }
    return 0;
}

