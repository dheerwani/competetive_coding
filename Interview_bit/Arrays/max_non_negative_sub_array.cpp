#define ll long long int
vector<int> Solution::maxset(vector<int> &nums) {
    ll currsum{};
    ll maxsum{-1};
    vector<int> temp;
    vector<int> ans;
    
    for(auto a:nums)
    {
        if(a<0)
        {
            if(currsum>maxsum)
            {
                ans.clear();
                ans=temp;
                maxsum=currsum;
            }
            else if(currsum == maxsum && ans.size()<temp.size())
            {
                ans.clear();
                ans=temp;
            }
            currsum=0;
            temp.clear();
        }
        else
        {
            currsum+=a;
            temp.push_back(a);
            
        }
    }
    
    if(currsum>maxsum)
        {
            ans.clear();
            ans=temp;
            temp.clear();
            maxsum=currsum;
        }
    else if(currsum == maxsum && ans.size()<temp.size())
        {
            ans.clear();
            ans=temp;
            temp.clear();
        }
    return ans;
    
}
