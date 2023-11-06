// problem Link: https://codeforces.com/problemset/problem/1886/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

double getDis(int ax, int ay, int bx, int by) {
    return sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
}

bool isInside(int ax, int ay, int px, int py, double r) {
    double d = getDis(ax, ay, px, py);
    return (r - d) > 1e-15;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {

        int px, py;
        cin >> px >> py;
        int ax, ay;
        cin >> ax >> ay;
        int bx, by;
        cin >> bx >> by;

        double r = INT_MAX * 1.0, l = 0.0, ans;

        while ((r - l) > 1e-15) {
            double radius = l + (r - l) / 2;
            if (isInside(ax, ay, 0, 0, radius) && isInside(ax, ay, px, py, radius)) {
                ans = radius;
                r = radius;
            }
            else if (isInside(bx, by, 0, 0, radius) && isInside(bx, by, px, py, radius)) {
                ans = radius;
                r = radius;
            }
            else if (isInside(ax, ay, 0, 0, radius) && isInside(bx, by, px, py, radius) && getDis(ax, ay, bx, by) <= 2 * radius) {
                ans = radius;
                r = radius;
            }
            else if (isInside(bx, by, 0, 0, radius) && isInside(ax, ay, px, py, radius) && getDis(ax, ay, bx, by) <= 2 * radius) {
                ans = radius;
                r = radius;
            }
            else {
                l = radius;
            }
        }

        cout << fixed << setprecision(10) << ans << '\n';
    }
    return 0;
}
