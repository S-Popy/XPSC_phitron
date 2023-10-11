// problem Link: https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
   int i =0, j =0, n = s.length(), ans =-1;
   
   map<char,int>mp;
   
   while(j<n){
      mp[s[j]]++;
      
      while(mp.size() >k){
          mp[s[i]]--;
          
          if(mp[s[i]] == 0){
              mp.erase(s[i]);
          }
          i++;
      }
       
       if(mp.size() == k)
           ans = max(ans, j-i+1);
           
           j++;
       
   }
   
   return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends