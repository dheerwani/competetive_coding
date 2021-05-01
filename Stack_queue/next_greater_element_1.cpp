class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        
        stack<int> s;
        unordered_map<int,int> mp;
       
        vector<int> ans;
        for(int i=m-1;i>=0;i--)
        {
            mp[nums2[i]] = i;
            if(s.empty())
            {
                ans.push_back(-1);
            }
            else if(s.size()>0 && s.top()>nums2[i])
            {
                ans.push_back(s.top());
            }
            else if(s.size()>0 && s.top()<=nums2[i])
            {
                while(s.size()>0 && s.top()<=nums2[i])
                {
                    s.pop();
                }
                if(s.size() == 0)
                {
                    ans.push_back(-1);
                }
                else
                {
                    ans.push_back(s.top());
                }
            }
            s.push(nums2[i]);
        }
        reverse(ans.begin(),ans.end());
        vector<int> temp;
        
        for(int i=0;i<n;i++)
        {
            temp.push_back(ans[mp[nums1[i]]]);
        }
        return temp;
    }
};