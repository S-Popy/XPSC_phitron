#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int main(){
    optimize ();
    
    int t;
    cin>> t;
    while(t--) {
        int n;
        cin >> n;

        int m[n];
        int k[n];

        for(int i = 0; i < n; i++){
            cin >> m[i] >> k[i];
        }

        int ans = m[0];

        for (int i = 1; i < n; i++){
            if(m[i] >= m[0] && k[i] >= k[0]){
                ans = -1;
            }
            
        }
        
    cout << ans << endl;

    }

    return 0;
}