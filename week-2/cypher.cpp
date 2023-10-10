// problem Link: https://codeforces.com/problemset/problem/1703/C

#include<bits/stdc++.h>
using namespace  std;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;

        int arr[n];
        for(int i= 0; i<n; i++){
            cin>> arr[i];
        }

        for(int i=0; i<n; i++){
            int num;
            cin>> num;
            while(num--){
                char ch;
                cin>> ch;

                if(ch == 'D'){
                    arr[i]++;
                }else{
                    arr[i]--;
                }
            }
            if(arr[i] >= 0)
            cout<< arr[i]%10<< " ";
        else
            cout<< (10 -abs(arr[i])) %10<< " ";
        }

        cout<< endl;    

    }
    return 0;
}