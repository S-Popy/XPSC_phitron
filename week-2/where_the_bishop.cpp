// problem Link: https://codeforces.com/problemset/problem/1692/C

#include<bits/stdc++.h>
using namespace  std;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        char ch[9][9];

        for(int i=1; i<=8; i++){
            for(int j=1; j<= 8; j++){
                cin>> ch[i][j];
            }
        }

        for(int i =2; i<=7; i++){
            for(int j =2; j<=7; j++){
                if(ch[i][j] == '#' && ch[i-1][j-1] == '#' && ch[i-1][j+1] == '#' && ch[i+1][j-1] == '#' && ch[i+1][j+1] == '#'){
                    cout<< i << " "<< j <<endl;
                }
            }
        }
    }
    return 0;
}