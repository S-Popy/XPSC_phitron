// problem Link: https://codeforces.com/problemset/problem/1759/C

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){

        int l, r, x;
        cin >> l >> r >> x;
        int a, b;
        cin >> a >> b;

        if(a == b){
            cout << 0 << '\n';
        }else if (a < b){
            if(b - a >= x){
                cout << 1 << endl;
            } else if (r - b >= x){
                cout << 2 << endl;
            }else if (a - l >= x){
                cout << 2 << endl;
            } else if (b - l >= x && r - a >= x){
                cout << 3 << endl;
            }else{
                cout << -1 << endl;
            }
        }else{
            if(a - b >= x){
                cout << 1 << endl;
            }else if (b - l >= x){
                cout << 2 << endl;
            }else if (r - a >= x){
                cout << 2 << endl;
            }else if (r - b >= x && a - l >= x){
                cout << 3 <<endl;
            }else {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}