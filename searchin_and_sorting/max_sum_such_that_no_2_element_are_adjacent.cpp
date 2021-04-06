class Solution{
    public:
    // Function to return maximum of sum without adjacent elements
    ll FindMaxSum(ll arr[], ll n)
    {
        // Your code here
        ll dp[n+1];
        dp[0]=0;
        dp[1] =arr[0];
        
        for(int i=1;i<n;i++)
        {
            dp[i+1] = max(dp[i],dp[i-1]+arr[i]);
        }
        
        return dp[n];
    }
};
