// problem Link: https://codeforces.com/problemset/problem/1692/D

#include<bits/stdc++.h>
using namespace  std;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int a, b, x, y, t, ans = 0;
        char ch;
        cin>> a >> ch >> b >> t;
        x = a;
        y = b;

        do{
            if(x%10 == y/10 && x /10 == y % 10)
            ans ++;
            y += t%60;
            
            if(y>=60){
                y -= 60;
                x++;
            }
                x+= t/60;
                x%= 24;
            
        }while (x !=a || y != b);
        cout<< ans <<endl;
        
    }
    return 0;
}