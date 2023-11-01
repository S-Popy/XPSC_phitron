// problem Link: 

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, h, m; cin >> n >> h >> m;
        int ans = INT_MAX;

        while(n--) {
        int hh, mm; cin >> hh >> mm;

        int count = 0;
        int hour = h, minute = m;

        while (1) {
            if(hour == hh && minute == mm) {
                break;
            }
            count++;
            minute++;

            if(minute == 60) {
                minute = 0;
                hour++;
                if (hour == 24) {
                    hour = 0;
                }
            }
        }
        ans = min (ans, count);
        }
        cout << ans/60 << ' ' << ans%60 << '\n';
    }
    return 0;
}