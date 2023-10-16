// problem Link: https://codeforces.com/problemset/problem/1669/E

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int count[12][12] = {0};
        ll ans = 0;

        for(int i = 0; i < n; i++){
            string s;
            cin >> s;

            for(int j = 0; j < 2; j++){
                for(char c = 'a'; c<= 'k'; c++){
                    if(c == s[j]) continue;

                    string a = s;
                    a[j] = c;
                    ans += count[a[0] - 'a'][a[1]-'a'];
                }
            }

            count[s[0] - 'a'][s[1] - 'a']++;
        }

        cout << ans <<endl;

    }
    return 0;
}