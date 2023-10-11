// problem Link: https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int i =0, j =0, ans =0;
        long long sum = 0;
        
        unordered_map<int,int>mp;
        
        while(j<N){
            sum+= A[j];
            
            if(mp.find(sum-K) != mp.end()){
                ans = max(ans, j-mp[sum-K]);
            }
            if(mp.find(sum) == mp.end()){
                mp[sum] = j;
            }
            
            if(sum == K){
                ans = max(ans, j-i+1);
            }
            j++;
        }
        
        return ans;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends