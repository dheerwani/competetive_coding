class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        int dp[n][n];
        vector<int> last = triangle[n-1];
        for(int i=0;i<last.size();i++)
        {
            dp[n-1][i] = last[i];
        }
        int curr=0;
        int maxleft=0;
        int maxright=0;
        
        for(int i=n-2;i>-1;i--)
        {
            vector<int> temp = triangle[i];
            
            for(int j=0;j<temp.size();j++)
            {
                maxleft = dp[i+1][j];
                maxright = dp[i+1][j+1];
                curr = temp[j] + min(maxleft,maxright);
                dp[i][j] = curr;
            }
            
        }
        
        return dp[0][0];
    }
};