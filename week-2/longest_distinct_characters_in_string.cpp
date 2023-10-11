// problem Link: https://practice.geeksforgeeks.org/problems/longest-distinct-characters-in-string5848/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



int longestSubstrDistinctChars (string S)
{
    int i =0, j = 0, n = S.length();
    int ans = 0;
    map<char,int>mp;
    
    while(j<n){
        mp[S[j]]++;
        
        while(mp.size() < j-i+1){
            mp[S[i]]--;
            if(mp[S[i]] == 0){
                mp.erase(S[i]);
            }
            i++;
        }
        
        if(mp.size() == j-i+1){
            ans = max(ans, j-i+1);
        }
        
        j++;
    }
    
    return ans;
}