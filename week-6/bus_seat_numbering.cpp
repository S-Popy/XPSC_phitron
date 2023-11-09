// problem Link: https://www.codechef.com/problems/SEATNUMBER

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> lower_double = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> lower_single = {11, 12, 13, 14, 15};
    vector<int> upper_double = {16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    vector<int> upper_single = {26, 27, 28, 29, 30};
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        if (find(lower_double.begin(), lower_double.end(), n) != lower_double.end()) {
            cout << "Lower Double\n";
        }
        else if (find(lower_single.begin(), lower_single.end(), n) != lower_single.end()) {
            cout << "Lower Single\n";
        }
        else if (find(upper_double.begin(), upper_double.end(), n) != upper_double.end()) {
            cout << "Upper Double\n";
        }
        else if (find(upper_single.begin(), upper_single.end(), n) != upper_single.end()) {
            cout << "Upper Single\n";
        }
    }
    
    return 0;
}
