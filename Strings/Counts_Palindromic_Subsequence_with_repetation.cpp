// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    /*You are required to complete below method */
    int m = 1000000007;
    long long int  countPS(string s)
    {
       //Your code here
       int n=s.length();
       long long int dp[n][n];
       memset(dp,-1,sizeof(dp));
       
       for(int gap=0;gap<n;gap++)
       {
           for(int i=0,j=gap;j<n;i++,j++)
           {
               if(gap==0)
               {
                   dp[i][j]=1;
               }
               else if(gap==1)
               {
                   dp[i][j] = (s[i]==s[j]) ? 3 : 2;
               }
               else
               {
                   if(s[i] == s[j])
                   {
                       dp[i][j] = (dp[i][j-1]%m + dp[i+1][j]%m + 1)%m;
                   }
                   else
                   {
                       long long int a=(dp[i][j-1]%m + dp[i+1][j]%m)%m;
                       long long int b= (dp[i+1][j-1]%m)%m;
                       dp[i][j] = ((a-b)%m + m) %m;
                   }
               }
           }
       }
       
       return dp[0][n-1];
    }
     
};

auto speedup = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

// { Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}  // } Driver Code Ends