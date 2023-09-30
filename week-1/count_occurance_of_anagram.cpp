// problem Link: https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	   int i =0, j=0, n = txt.length(), k = pat.length();
	   
	   map<char,int>mp;
	   int ans =0;
	   
	   for(int m =0; m<k; m++){
	       mp[pat[m]]++;
	   }
	   
	   int count = mp.size();
	   
	   while(j<n){
	       if(txt[j] == mp[txt[j]]){
	           mp[txt[j]]--;
	       
	       if(mp[txt[j]] == 0)
	           count--;
	       }
	       
	       if(j>=k){
	           if(count == 0)
	           ans++;
	           
	           if(mp[txt[i]] == txt[i]){
	               if(mp[txt[i] == 0])
	                count++;
	                mp[txt[i]]++;
	       }
	       }
	       
	       i++;
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
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends