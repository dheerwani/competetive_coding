class Solution {
public:
    
    static bool cmp(vector<int> a,vector<int> b)
    {
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        
        sort(points.begin(),points.end(),cmp);
        int cnt=1;
        int curr=0;
        for(int i=1;i<points.size();i++)
        {
            if(points[curr][1] < points[i][0])
            {
                cnt++;
                curr=i;
            }
        }
        return cnt;
    }
};