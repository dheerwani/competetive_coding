int Solution::maxSubArray(const vector<int> &a) {
    int currsum=a[0];
    int maxsum=a[0];
    
    for(int i=1;i<a.size();i++)
    {
        currsum = max(currsum+a[i],a[i]);
        maxsum = max(maxsum,currsum);
    }
    
    return maxsum;
}
