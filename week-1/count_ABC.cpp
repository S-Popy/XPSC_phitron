// problem Link: https://atcoder.jp/contests/abc150/tasks/abc150_b?lang=en

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "ABC";
    int n;
    cin>> n;

    string m;
    cin>> m;

    int count = 0;

    int k = s.length();

    for (int i = 0; i <= n - k; i++) {
        string p = m.substr(i, k); 

        if (p == s) {
            count++;
            i += k - 1; 
        }
    }

    cout << count << endl;

    return 0;
}