// problem Link: https://codeforces.com/problemset/problem/1722/D

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
        string s;
        cin >> s;

        long long sum = 0;
        vector<long long>v;
        for(int i = 0; i < n; i++){
            if(s[i] == 'L'){
                v.push_back((n - 1 - i) - i);
                sum += i;
            }else{
                v.push_back(i - (n - 1 - i));
                sum += n - 1 - i;
            }
        }

        sort(v.begin(), v.end(), greater<int>());

        for(int i = 0; i < n; i++){
            if(v[i] > 0){
                sum += v[i];
            }

            cout << sum << " ";
        }

        cout <<endl;

    }
    return 0;
}