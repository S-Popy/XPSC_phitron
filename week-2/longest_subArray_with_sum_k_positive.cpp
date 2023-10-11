// problem Link: https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=1

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int i =0, j =0, ans =0, n = a.size();
    long long sum = 0;

    while(j<n){
        sum+= a[j];

        while(sum>k){
            sum-=a[i];
            i++;
            }

            if(sum == k)
            ans = max(ans, j-i+1);
            j++;
    
    }

    return ans;
}