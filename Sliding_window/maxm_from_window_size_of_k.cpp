class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            while(!dq.empty() && nums[i]>=nums[dq.back()]) dq.pop_back();
            dq.push_back(i);
            
            if(i>=k-1) ans.push_back(nums[dq.front()]);
            if(dq.front()<= i-k+1) dq.pop_front();
        }
        return ans;
    }
};