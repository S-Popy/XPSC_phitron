// problem Link: https://codeforces.com/problemset/problem/1741/A

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    while(t--) {
        string s1, s2; cin >> s1 >> s2;
        int n1 = s1.length(), n2 = s2.length();

        if( s1 == s2){
            cout << "=" << '\n';
        }
        else if(s1[n1-1] == 'S' && s2[n2-1] == 'S') {
            if(n1 > n2) {
                cout << "<" << '\n';
            } else {
                cout << ">" << '\n';
            }
        }
        else if( s1[n1-1] == 'L' && s2[n2-1] == 'L') {
            if(n1 > n2) {
                cout << ">" << '\n';
            } else {
                cout << "<" << '\n';
            }
        }
        else if (s2[n2-1] == 'M') {
            if(s1[n1-1] == 'S') {
                cout << "<" << '\n';
            }
            else if (s1[n1-1] == 'L') {
                cout << ">" << '\n';
            }
        }
        else if (s1[n1-1] == 'M') {
            if (s2[n2-1] == 'S') {
                cout << ">" <<'\n';
            } else if (s2[n2-1] == 'L') {
                cout << "<" << '\n';
            }
        }
        else if(s1[n1-1] == 'S' && s2[n2-1] == 'L') {
            cout << "<" << '\n';
        }
        else if (s1[n1-1] == 'L' && s2[n2-1] == 'S') {
            cout << ">" << '\n';
        }
    }
    return 0;
}