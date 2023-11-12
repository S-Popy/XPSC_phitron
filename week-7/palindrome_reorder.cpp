// problem Link: https://cses.fi/problemset/task/1755

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string s; cin >> s;
    int cnt[26] = {0};
 
    for (int i = 0; i < s.size(); i++) {
        cnt[s[i] - 'A']++;
    }
 
    int odd_count = 0;
    int odd_index = -1;
 
    for (int i = 0; i < 26; i++) {
        if(cnt[i] % 2 == 1) {
            odd_count++;
            odd_index = i;
        }
    }
 
    if (odd_count > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }
    
    for (int i = 0; i < 26; i++) {
        if(cnt[i] % 2 == 0) {
            int half = cnt[i] / 2;
            cnt[i] -= half;
            while(half--) {
                cout << (char) ('A' + i);
            }
        }
    }
 
    if (odd_index != -1){
        while(cnt[odd_index]--) {
            cout << (char) ('A' + odd_index);
        }
    }
 
    for (int i = 25; i >= 0; i--) {
        while(cnt[i] > 0) {
            cnt[i]--;
            cout << (char) ('A' + i);
        }
    }
    cout << '\n';
 
 
    return 0;
}